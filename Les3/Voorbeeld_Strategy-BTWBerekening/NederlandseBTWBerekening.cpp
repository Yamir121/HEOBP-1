#include "NederlandseBTWBerekening.h"

double NederlandseBTWBerekening::geefBTW(int param, double d) {
    if (param == BTWBerekening::ITEMSOORT_VOEDSEL) {
        return d * 1.06;
    } else if (param == BTWBerekening::ITEMSOORT_BOEKEN) {
        return d * 1.21;
    } else {
        return d * 1.21;
    }
}
