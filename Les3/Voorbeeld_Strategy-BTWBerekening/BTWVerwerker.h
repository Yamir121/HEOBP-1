#pragma once


#include "BTWBerekening.h"

class BTWVerwerker {
    public:
        BTWVerwerker();

        void verwerkBerekeningen();
        BTWBerekening* berekeningVoorLand();
};

