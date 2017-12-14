#include "Container.h"

Container::Container(int capacity, string colour) {
    this->capacity = capacity;
    this->colour = colour;
}

const string& Container::getColour() const {
    return colour;
}

int Container::getCapacity() const {
    return capacity;
}


