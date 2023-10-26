cmake_minimum_required(VERSION 3.16)

project(Login VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})


find_package(Qt6 6.4 REQUIRED COMPONENTS Quick)

qt_standard_project_setup()

qt_add_executable(appLogin
    main.cpp
)

qt_add_qml_module(appLogin
    URI Login
    VERSION 1.0
    QML_FILES Main.qml
    SOURCES logincontroller.h logincontroller.cpp
    SOURCES authentification.h authentification.cpp
    SOURCES authdata.h authdata.cpp
    SOURCES dto.h dto.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appLogin PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appLogin
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appLogin
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appLogin
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
