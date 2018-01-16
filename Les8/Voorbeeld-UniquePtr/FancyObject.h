#pragma once

#include <string>

using namespace std;

class FancyObject {
    public:
        FancyObject();
        FancyObject(string name);

        virtual ~FancyObject();

        FancyObject(const FancyObject& other);

        FancyObject& operator=(const FancyObject& other);

    private:
        string name;
};

