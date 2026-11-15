cmake_minimum_required(VERSION 3.16)

project(h2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h2 main.cpp
    car.h car.cpp
<<<<<<< HEAD
    rectangle.h rectangle.cpp
    student.h student.cpp)
=======
    rectangle.h rectangle.cpp)
>>>>>>> 6d82e415b1c3e1f7db0aa3bfe247c7e66ade54b7

include(GNUInstallDirs)
install(TARGETS h2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
