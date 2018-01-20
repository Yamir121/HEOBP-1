#include "Decorator.h"

Decorator::Decorator(Widget* w) {
    wrappedWidget = w;
}

void Decorator::draw() {
    wrappedWidget->draw();
}
