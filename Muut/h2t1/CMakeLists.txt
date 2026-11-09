cmake_minimum_required(VERSION 3.16)

project(h2t1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h2t1 main.cpp
    henkilo.h henkilo.cpp)

include(GNUInstallDirs)
install(TARGETS h2t1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
