cmake_minimum_required(VERSION 3.19)
cmake_policy(VERSION 3.19)

set(MBED_APP_JSON_PATH mbed_app.json)
# set(CUSTOM_TARGETS_JSON_PATH custom_targets.json) # If you need a custom target, use this line to specify the custom_targets.json

include(mbed-os/tools/cmake/app.cmake)

# If you need any custom upload method configuration for your target, do that here

add_subdirectory(mbed-os)

project(ProjectName)

add_executable(AppName main.cpp)
target_link_libraries(AppName mbed-os)
mbed_set_post_build(AppName)

mbed_finalize_build()