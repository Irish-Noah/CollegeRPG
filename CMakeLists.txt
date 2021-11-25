cmake_minimum_required(VERSION 3.20)
project(CollegeRPG)

set(CMAKE_CXX_STANDARD 17)

# Request the required wxWidgets libs
set(wxBUILD_PRECOMP OFF)
find_package(wxWidgets COMPONENTS core base xrc html xml REQUIRED)

# Include the wxWidgets use file to initialize various settings
include(${wxWidgets_USE_FILE})

# Define a variable containing a list of source files for the project
set(SOURCE_FILES main.cpp CollegeAPP.cpp CollegeAPP.h)

add_executable(CollegeRPG WIN32 MACOSX_BUNDLE ${SOURCE_FILES})

# Link required libraries to the executable
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
