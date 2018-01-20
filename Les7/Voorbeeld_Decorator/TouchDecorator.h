#pragma once

#include "Decorator.h"

class TouchDecorator: public Decorator
{
    public:
        TouchDecorator(Widget* w);

        void draw();
};
