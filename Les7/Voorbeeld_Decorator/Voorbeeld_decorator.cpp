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

    Widget* plainWidget =  Widget::makeWidget(0);
    widgets.push_back(plainWidget);

    Widget* decoratedWidget = Widget::makeWidget(1);
    widgets.push_back(decoratedWidget);

    draw(widgets);

    delete plainWidget;
    delete decoratedWidget;
}
