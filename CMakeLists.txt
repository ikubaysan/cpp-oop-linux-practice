cmake_minimum_required(VERSION 3.10)
project(UserAdminProject)

# C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)
include_directories(external/json/include)

# Source files
file(GLOB SOURCES "src/*.cpp")

# Executable
add_executable(UserAdminApp ${SOURCES})

# Fetch JSON
include(FetchContent)
FetchContent_Declare(json
  GIT_REPOSITORY https://github.com/nlohmann/json.git
  GIT_TAG v3.10.5)
FetchContent_MakeAvailable(json)

# Link JSON
target_link_libraries(UserAdminApp PRIVATE nlohmann_json::nlohmann_json)

# Fetch Catch2
FetchContent_Declare(
  catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v2.13.7
)
FetchContent_MakeAvailable(catch2)

# Test executable
enable_testing()
add_executable(tests tests/test_main.cpp src/user.cpp src/location.cpp src/admin.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2)
target_include_directories(tests PRIVATE ${json_SOURCE_DIR}/include)