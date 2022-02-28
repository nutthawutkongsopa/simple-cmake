cmake_minimum_required(VERSION 3.8)

file(GLOB source_files "src/*")

add_library(my_lib SHARED ${source_files})