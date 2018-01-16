#include <iostream>
#include <memory>
#include "FancyObject.h"

using namespace std;

namespace xstd {
    template<typename T, typename P>
    unique_ptr<T> make_unique(P init) {
        return unique_ptr<T>(new T(init));
    };
}

void pietje(unique_ptr<FancyObject> f) {
//void pietje(unique_ptr<FancyObject>& f) { // gaat niet: kan niet copieeren
    cout << f.get() << endl;
}

int main() {
    cout << "===============begin" << endl;

//        FancyObject f1 = FancyObject("first"); // automatisch opgeruimd
    FancyObject* f1 = new FancyObject("first");  // *niet* automatisch opgeruimd

//    unique_ptr<FancyObject> f2 = unique_ptr<FancyObject>(new FancyObject("second"));
    unique_ptr<FancyObject> f2 = make_unique<FancyObject>("second");         // vanaf C++14
//    unique_ptr<FancyObject> f2 = xstd::make_unique<FancyObject>("second"); // ouder dan/vóór C++14


    unique_ptr<FancyObject> f3 = make_unique<FancyObject>("third");
    cout << "f3:" << f3.get() << endl;

    unique_ptr<FancyObject> f4;
//    f4 = f3;  // is niet mogelijk
    f4 = std::move(f3);  // kan wel: expliciet ownership dorgeven
    cout << "f3:" << f3.get() << endl;
    cout << "f4:" << f4.get() << endl;

//    f4.reset();

//    pietje(f4); // alleen als reference (kan niet kopieeren)

    cout << "===============done" << endl;

    return 0;
}