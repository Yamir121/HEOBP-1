#include "Config.h"

Config::Config(string name) {
    this->name = name;
}

void Config::put(std::string key, string value) {
    keys.push_back(key);
    values.push_back(value);
}

string& Config::operator[](string key) {
    for (int i = 0; i < keys.size(); ++i) {
        if (key == keys[i]) {
            return values[i];
        }
    }
    return noSuchKey;
}

ostream& operator<<(ostream& os, const Config& config) {
    os << "# Configfile:" << config.name << endl;
    for (int i = 0; i < config.keys.size(); ++i) {
        os << "  key" << config.keys[i] << "=" << config.values[i] << endl;
    }

    return os;
}