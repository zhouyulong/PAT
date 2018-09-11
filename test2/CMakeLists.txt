cmake_minimum_required(VERSION 3.12)
project(test2)

set(CMAKE_CXX_STANDARD 14)

add_executable(test2
        .idea/codeStyles/Project.xml
        .idea/misc.xml
        .idea/modules.xml
        .idea/test2.iml
        .idea/workspace.xml
        cmake-build-debug/CMakeCache.txt
        CMakeLists.txt
        main.cpp)
