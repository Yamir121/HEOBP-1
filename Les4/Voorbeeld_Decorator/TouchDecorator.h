#pragma once

#include "Decorator.h"

class TouchDecorator: public Decorator
{
    public:
        // 6. Optional embellishment
        TouchDecorator(Widget *w);

        /*virtual*/
        void draw();
};
