#pragma once
#include "location.hpp"
#include <string>
#include <nlohmann/json.hpp>

class User {
protected:
    std::string username;
    std::string name;
    Location location;

public:
    User(const std::string& username, const std::string& name, const Location& loc);
    virtual void printInfo() const;
    static User fromJson(const nlohmann::json& j);

    std::string getUsername() const { return username; }
    std::string getName() const { return name; }
};
