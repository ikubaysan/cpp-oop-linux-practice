#pragma once
#include "user.hpp"

class Admin : public User {
private:
    int adminId;

public:
    Admin(const std::string& username, const std::string& name, const Location& loc, int adminId);
    void printInfo() const override;
};
