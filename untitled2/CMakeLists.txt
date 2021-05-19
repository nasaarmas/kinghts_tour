cmake_minimum_required(VERSION 3.19)
project(untitled2)

#sciezka do qt
set(CMAKE_PREFIX_PATH "/opt/Qt/6.1.0/gcc_64/lib/cmake/Qt6/")



set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
include_directories(.)
add_executable(untitled2
        fraktale.cpp
        fraktale.h
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui)

find_package(Qt6 COMPONENTS
        Widgets REQUIRED
        Gui REQUIRED
        Core REQUIRED)
target_link_libraries(untitled2
        Qt6::Widgets
        Qt6::Gui
        Qt6::Core)