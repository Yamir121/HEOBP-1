#pragma once


#include "BTWBerekening.h"

class BritseBTWBerekening : public BTWBerekening {
    public:
        BritseBTWBerekening();
        virtual ~BritseBTWBerekening();
        double geefBTW(int param, double d) override;
};

