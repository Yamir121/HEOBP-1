#pragma once


#include "BTWBerekening.h"

class NederlandseBTWBerekening : public BTWBerekening {
    public:
        double geefBTW(int param, double d) override;

};

