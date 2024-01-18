add_executable(LCD_16x2
        main.c
        LCD_16x2.c
        )

target_include_directories(LCD_16x2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# pull in common dependencies
target_link_libraries(LCD_16x2 pico_stdlib hardware_gpio)

# create map/bin/hex file etc.
pico_add_extra_outputs(LCD_16x2)

