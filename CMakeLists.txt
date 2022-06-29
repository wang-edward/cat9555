cmake_minimum_required(VERSION 3.0)

project(Allotemplate)

# name of application. replace 'app' with desired app name
set(APP_NAME app)

# GDB debug flag
set(CMAKE_BUILD_TYPE Debug)

# set mraa locations
set (mraa_INCLUDE_DIRS "/usr/local/include")
set (mraa_LIBRARIES "/usr/local/lib/libmraa.so")
include_directories (${APP_NAME} ${mraa_INCLUDE_DIRS})

# path to main source file
add_executable(${APP_NAME} CAT9555.cpp main.cpp)

# add allolib as a subdirectory to the project


# link allolib to project
target_link_libraries(${APP_NAME} ${mraa_LIBRARIES}) # add mraa

# example line for find_package usage
# find_package(Qt5Core REQUIRED CONFIG PATHS "C:/Qt/5.12.0/msvc2017_64/lib" NO_DEFAULT_PATH)

# replace ${PATH_TO_INCLUDE_DIR} before including other libraries
# target_include_directories(${APP_NAME} PRIVATE ${PATH_TO_INCLUDE_DIR})

# replace ${PATH_TO_LIB_FILE} before linking other libraries
# target_link_libraries(${APP_NAME} PRIVATE ${PATH_TO_LIB_FILE})
