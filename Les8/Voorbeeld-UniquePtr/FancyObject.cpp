#include "FancyObject.h"

#include <iostream>

FancyObject::FancyObject() {
    this->name = "noname";
}

FancyObject::FancyObject(string name) {
    this->name = name;
    cout << "ctor " << this << " " << name << endl;
}

FancyObject::~FancyObject() {
    cout << "dtor " << this << " " << name << endl;
}

FancyObject::FancyObject(const FancyObject& other) {
    this->name = other.name;
}

FancyObject& FancyObject::operator=(const FancyObject& other) {
    this->name = other.name;
    return *this;
}