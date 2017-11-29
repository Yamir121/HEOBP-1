#include "BTWVerwerker.h"
#include "Verkoop.h"
#include "NederlandseBTWBerekening.h"

BTWVerwerker::BTWVerwerker() {
}

void BTWVerwerker::verwerkBerekeningen() {
    BTWBerekening* berekening = berekeningVoorLand();

    Verkoop* verkoop1 = new Verkoop();
    Verkoop* verkoop2 = new Verkoop();
    Verkoop* verkoop3 = new Verkoop();
    verkoop1->verwerkBTW(berekening);
    verkoop2->verwerkBTW(berekening);
    verkoop3->verwerkBTW(berekening);

    // verkoop wel opruimen...
}

BTWBerekening* BTWVerwerker::berekeningVoorLand() {
    return new NederlandseBTWBerekening(); // leaking...
}
