#include "Park.h"

#include <iostream>

Park::Park() {}

void Park::addDinosaur(Dinosaur d) {
    dinosaurs.push_back(d);
}

void Park::list() {
    std::cout << "----- In the park:" << std::endl;
    std::vector<Dinosaur>::iterator it = dinosaurs.begin();
    while (it != dinosaurs.end()) {
        std::cout << it->getName() << std::endl;
        it++;
    }
    std::cout << "-----" << std::endl;
}

void Park::openGate() {
    std::vector<Dinosaur>::iterator it = dinosaurs.begin();

    while (it != dinosaurs.end()) {
        if (it->getName() == "Velociraptor") {
            std::cout << "Escaped: " << it->getName() << std::endl;
            it = dinosaurs.erase(it);
        } else {
            it++;
        }
    }
}
