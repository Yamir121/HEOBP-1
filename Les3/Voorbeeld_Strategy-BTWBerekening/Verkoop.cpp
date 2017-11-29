#include "Verkoop.h"


Verkoop::Verkoop() {
}

Verkoop::~Verkoop() {
}

void Verkoop::verwerkBTW(BTWBerekening* berekening) {
    double prijsItem1 = 25.50;
    double prijsItem2 = 13.75;

    double btw1 = berekening->geefBTW(BTWBerekening::ITEMSOORT_KLEDING, prijsItem1);
    double btw2 = berekening->geefBTW(BTWBerekening::ITEMSOORT_VOEDSEL, prijsItem2);

    double totaalPrijs = prijsItem1+prijsItem2;
    double totaalBTW = btw1+btw2;
}
