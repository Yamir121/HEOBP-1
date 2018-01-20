#include <iostream>
#include "BorderDecorator.h"

BorderDecorator::BorderDecorator(Widget* w) : Decorator(w) {
}

void BorderDecorator::draw() {
    Decorator::draw();
    std::cout << "- toegevoegd: BorderDecorator" << std::endl;
}
