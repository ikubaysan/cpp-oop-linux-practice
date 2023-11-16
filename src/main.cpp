#include "user.hpp"
#include "admin.hpp"
#include <nlohmann/json.hpp>
#include <fstream>
#include <iostream>

int main() {
    // Example JSON string
    std::string jsonString = R"({"username": "jdoe", "name": "John Doe", "location": {"city": "New York", "state": "NY"}})";
    nlohmann::json json = nlohmann::json::parse(jsonString);

    User user = User::fromJson(json);
    user.printInfo();

    // For file loading, use ifstream and json::parse
    return 0;
}
