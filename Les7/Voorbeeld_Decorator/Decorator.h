#pragma once

#include "Widget.h"

class Decorator : public Widget {
        Widget* wrappedWidget;
    public:
        Decorator(Widget* w);

        virtual void draw();
};
