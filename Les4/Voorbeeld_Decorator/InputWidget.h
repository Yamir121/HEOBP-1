#pragma once

#include <iostream>
#include "Widget.h"

class InputWidget : public Widget {
        int width, height;
    public:
        InputWidget(int w, int h) {
            width = w;
            height = h;
        }

        void draw() {
            std::cout << "InputWidget: " << width << ", " << height << std::endl;
        }
};

