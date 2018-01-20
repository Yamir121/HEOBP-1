#include "Decorator.h"

Decorator::Decorator(Widget* w) {
    theWidget = w;
}

void Decorator::draw() {
    theWidget->draw();
}
