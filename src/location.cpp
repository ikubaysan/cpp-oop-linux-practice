#include "location.hpp"

Location::Location(const std::string& city, const std::string& state)
    : city(city), state(state) {}

std::string Location::getCity() const { return city; }
std::string Location::getState() const { return state; }
