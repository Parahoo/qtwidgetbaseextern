cmake_minimum_required(VERSION 3.5)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(SOURCES
        qcheckboxswitch.h qcheckboxswitch.cpp
         qwidgetcard.h qwidgetcard.cpp
         qgroupboxcard.h qgroupboxcard.cpp
        qtwidgetbaseextern.qrc
)

add_library(qtwidgetbaseextern STATIC ${SOURCES}
    )
target_link_libraries(qtwidgetbaseextern Qt${QT_VERSION_MAJOR}::Widgets)
