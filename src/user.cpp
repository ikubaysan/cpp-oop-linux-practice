#include "user.hpp"
#include <iostream>

User::User(const std::string& username, const std::string& name, const Location& loc)
    : username(username), name(name), location(loc) {}

void User::printInfo() const {
    std::cout << "Username: " << username << ", Name: " << name
              << ", Location: " << location.getCity() << ", " << location.getState() << std::endl;
}

User User::fromJson(const nlohmann::json& j) {
    return User(j["username"], j["name"], Location(j["location"]["city"], j["location"]["state"]));
}
