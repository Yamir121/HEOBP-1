#include "Park.h"

#include <iostream>

Park::Park() {}

void Park::addDinosaur(Dinosaur d) {
    dinosaurs[count] = d;
    count++;
}

void Park::list() {
    std::cout << "----- In the park:" << std::endl;
    for (int i = 0; i < count; ++i) {
        std::cout << dinosaurs[i].getName() << std::endl;
    }
    std::cout << "-----" << std::endl;
}

void Park::openGate() {
    // hier een dinosaurus uit de array halen
}
