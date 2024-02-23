# cpp-oop-linux-practice

`sudo apt-get install cmake g++ git`

```
sudo apt update
sudo apt install build-essential
```

```
repo/
|-- CMakeLists.txt
|-- include/
|   |-- json_handler/
|   |   `-- json_processor.h
|   |-- thread_manager/
|   |   `-- thread_pool.h
|-- src/
|   |-- json_handler/
|   |   `-- json_processor.cpp
|   |-- thread_manager/
|   |   `-- thread_pool.cpp
|   `-- main.cpp
|-- tests/
|   `-- test_main.cpp
`-- external/
    `-- nlohmann/
        `-- json.hpp
```

From root of repo:

`mkdir build`
`cd build`
`cmake ..`
`make`

You will see a `UserAdminApp` and `tests` executable.
