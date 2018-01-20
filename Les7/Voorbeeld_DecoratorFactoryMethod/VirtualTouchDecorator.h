#pragma once

#include "Decorator.h"

class VirtualTouchDecorator : public Decorator {
    public:
        VirtualTouchDecorator(Widget* w);

        void draw();
};
