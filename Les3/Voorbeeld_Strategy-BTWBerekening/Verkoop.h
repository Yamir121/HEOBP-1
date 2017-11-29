#pragma once


#include "BTWBerekening.h"

class Verkoop {

    public:
        Verkoop();
        virtual ~Verkoop();

        void verwerkBTW(BTWBerekening* berekening);
};

