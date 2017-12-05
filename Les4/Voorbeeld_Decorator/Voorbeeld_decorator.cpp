#include <vector>

#include "Widget.h"
#include "BorderDecorator.h"
#include "TouchDecorator.h"
#include "InputWidget.h"


void draw(std::vector<Widget*> widgets) {
    for (auto& widget : widgets) {
        std::cout << "---" << std::endl;
        widget->draw();
    }
    std::cout << "---" << std::endl;
}

int main() {
    std::vector<Widget*> widgets;

    Widget* plainWidget = new InputWidget(80, 24);
    widgets.push_back(plainWidget);

    Widget* decoratedWidget = new BorderDecorator(new TouchDecorator(new InputWidget(80, 24)));
    widgets.push_back(decoratedWidget);

    Widget* decoratedWidget2 = new BorderDecorator((new InputWidget(80, 24)));
    widgets.push_back(decoratedWidget2);

    draw(widgets);

    delete plainWidget;
    delete decoratedWidget;
}
