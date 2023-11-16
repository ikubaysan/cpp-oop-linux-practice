#pragma once
#include <string>

class Location {
private:
    std::string city;
    std::string state;

public:
    Location(const std::string& city, const std::string& state);
    std::string getCity() const;
    std::string getState() const;
};
