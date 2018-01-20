#pragma once

class Widget {
    public:
        virtual void draw() = 0;

        static Widget* makeWidget(int type);
};

