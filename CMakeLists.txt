cmake_minimum_required(VERSION 3.13...3.27)

# initialize the SDK based on PICO_SDK_PATH
# note: this must happen before project()
include(pico_sdk_import.cmake)

project(picoDoorAlarm)

# initialize the Raspberry Pi Pico SDK
pico_sdk_init()

# rest of your project

add_executable(hello_alarm
            hello_alarm.c
            )

target_link_libraries(hello_alarm pico_stdlib)

if (PICO_CYW43_SUPPORTED)
    target_link_libraries(hello_alarm pico_cyw43_arch_none)
endif()

pico_enable_stdio_usb(hello_alarm 1)
pico_enable_stdio_uart(hello_alarm 0)

pico_add_extra_outputs(hello_alarm)
