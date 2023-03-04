cmake_minimum_required(VERSION 3.5)

project(CourseWork VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Quick Sql)
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    secondwindow.cpp
    secondwindow.h
    secondwindow.ui
    clientchoose.cpp
    clientchoose.h
    clientchoose.ui
    worktime.cpp
    worktime.h
    worktime.ui
    mon.cpp
    mon.h
    mon.ui
    tue.cpp
    tue.h
    tue.ui
    wed.cpp
    wed.h
    wed.ui
    thu.cpp
    thu.h
    thu.ui
    fri.cpp
    fri.h
    fri.ui
    sat.cpp
    sat.h
    sat.ui
    sun.cpp
    sun.h
    sun.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(CourseWork
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET CourseWork APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(CourseWork SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(CourseWork
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(CourseWork PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Quick Qt${QT_VERSION_MAJOR}::Sql)

set_target_properties(CourseWork PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

install(FILES $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Core>
              $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Gui>
              $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Widgets>
              $<TARGET_FILE:Qt${QT_VERSION_MAJOR}::Sql>
              DESTINATION .)
install(DIRECTORY ${QT_MAIN_DIR}/plugins/platforms/
                DESTINATION ./platforms USE_SOURCE_PERMISSIONS)

install(DIRECTORY
  ${QT_MAIN_DIR}/plugins/sqldrivers/
      DESTINATION ./sqldrivers USE_SOURCE_PERMISSIONS)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(CourseWork)
endif()
