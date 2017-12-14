#include <iostream>
#include <fstream>
#include "Config.h"

int main() {
    Config config1 = Config("firstconfig");
    config1.put("key1", "value1");
    config1.put("key2", "value2");

    cout << config1["key1"] << endl;
    cout << config1["key3"] << endl;

    cout << config1 << endl;

    Config config2 = Config("secondconfig");
    cout << "Config2: (vers)" << config2 << endl;

    config1.put("key4", "value4");
    config2.put("key3", "value3");
    cout << "Config1:" << config1 << endl;
    cout << "Config2:" << config2 << endl;

    ofstream output;
    output.open("saveconfig");
    output << config1 << endl;
    output.close();

    return 0;
}