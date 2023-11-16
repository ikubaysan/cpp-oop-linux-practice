#include "admin.hpp"
#include <iostream>

Admin::Admin(const std::string& username, const std::string& name, const Location& loc, int adminId)
    : User(username, name, loc), adminId(adminId) {}

void Admin::printInfo() const {
    User::printInfo();
    std::cout << "Admin ID: " << adminId << std::endl;
}
