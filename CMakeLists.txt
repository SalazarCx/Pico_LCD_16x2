cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(LCD_16x2)

pico_sdk_init()

add_subdirectory(src)
include_directories(src)



