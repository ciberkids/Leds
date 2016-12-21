

generate_arduino_library(LedLib
        BOARD ${BOARD}
        SRCS Led.cpp
        HDRS Led.h
        )

generate_arduino_library(BlinkLedLib
        BOARD ${BOARD}
        SRCS Leds.cpp
        HDRS Leds.h
        )
