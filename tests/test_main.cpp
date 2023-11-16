#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "user.hpp"
#include "admin.hpp"

TEST_CASE("User Creation", "[User]") {
    Location loc("New York", "NY");
    User user("jdoe", "John Doe", loc);

    REQUIRE(user.getUsername() == "jdoe");
    REQUIRE(user.getName() == "John Doe");
    // Add more tests as needed
}

// Additional tests...
