#pragma once

class Widget {
    public:
        static Widget* makeWidget(int type);
        virtual void draw() = 0;
};
