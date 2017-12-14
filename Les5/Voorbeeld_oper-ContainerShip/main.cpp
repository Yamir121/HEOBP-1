#include <iostream>
#include "Ship.h"

int main() {
    Ship ship = Ship("Maersk1", 15000);

    Container container1 = Container(10, "red");
    Container container2 = Container(20, "blue");
    Container container3 = Container(15, "green");

    ship = ship + container1;
    cout << ship.getName() << " load=" << ship.getLoad() << ", containers=" << ship.getNumberOfContainers() << endl;

    ship += container1;
    cout << ship.getName()
         << " containers=" << ship.getNumberOfContainers()
         << " load=" << ship.getLoad()
         << endl;

    ship = ship + container2;
    cout << ship.getName()
         << " containers=" << ship.getNumberOfContainers()
         << " load=" << ship.getLoad()
         << endl;

    ship = ship + container3;
    cout << ship.getName()
         << " containers=" << ship.getNumberOfContainers()
         << " load=" << ship.getLoad()
         << endl;

    ship = ship - container3;
    cout << ship.getName()
         << " containers=" << ship.getNumberOfContainers()
         << " load=" << ship.getLoad()
         << endl;

    return 0;
}