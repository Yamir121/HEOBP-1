#pragma once

class BTWBerekening {
    public:
        static const int ITEMSOORT_BOEKEN = 2;
        static const int ITEMSOORT_KLEDING = 1;
        static const int ITEMSOORT_VOEDSEL = 3;

    public:
        virtual ~BTWBerekening();
        BTWBerekening();
        virtual double geefBTW(int param, double d) = 0;
};