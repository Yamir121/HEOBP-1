#include "BritseBTWBerekening.h"

BritseBTWBerekening::BritseBTWBerekening() {}

BritseBTWBerekening::~BritseBTWBerekening() {
}

double BritseBTWBerekening::geefBTW(int param, double d) {
    if (param == BTWBerekening::ITEMSOORT_VOEDSEL) {
        return d * 1.05;
    } else if (param == BTWBerekening::ITEMSOORT_BOEKEN) {
        return d;
    } else {
        return d * 1.20;
    }
}
