#include <iostream>
#include "TestDtor.h"


void methodWithException() {
    while (true) {
        try {
            TestDtor test = TestDtor();
            int value;
            std::cin >> value;

            if (value > 25) {
                throw std::string("That's too high");
            }

            if (value == 15) {
                throw 15;
            }

            if (value == 6) {
                throw 'a';
            }
        } catch (int v) {
            if (v == 15) {
                std::cout << "I'll allow it" << std::endl;
            } else {
                throw;
            }
        }
    }
}

void methodWithDeclaredException() throw(char) {
    throw 'b';
//    throw 5;
}

void onverwacht() {
    std::cout << "Daar had ik niet op gerekend" << std::endl;
}

int main() {
    std::set_unexpected(&onverwacht);

    methodWithDeclaredException();

    try {
//        methodWithException();
        methodWithDeclaredException();
    } catch (std::string& e) {
        std::cout << e;
    } catch (...) {
        std::cout << "catch-all exception handler" << std::endl;
    }

    return 0;
}