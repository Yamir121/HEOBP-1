#pragma once

#include <string>
#include <ostream>
#include "Child.h"

using namespace std;

class Parent {
    public:
        Parent(string name);

        Parent(const Parent& other);

        virtual ~Parent();

        Parent& operator=(const Parent& other);

        friend ostream& operator<<(ostream& os, const Parent& parent);

    private:
        string name;
        Child* child;
};

