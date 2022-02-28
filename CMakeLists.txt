cmake_minimum_required(VERSION 3.8)
project(MyApp)

set(project_dir "${CMAKE_CURRENT_SOURCE_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${project_dir}/bin)

add_subdirectory(libs)
add_subdirectory(src)