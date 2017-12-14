#pragma once

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Config {
    public:
        Config(string name);

        void put(string key, string value);

        string& operator[](string key);

        friend ostream& operator<<(ostream& os, const Config& config);

    private:
        string noSuchKey = "NO_SUCH_KEY";
        string name;
        vector<string> keys;
        vector<string> values;
};

