#pragma once

#include "Widget.h"

class Decorator : public Widget {
        Widget* theWidget;
    public:
        Decorator(Widget* w);

        virtual void draw();
};
