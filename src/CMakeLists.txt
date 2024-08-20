set(SOURCE_FILES main.cpp Echo.cpp)

add_executable(EchoApp ${SOURCE_FILES})

target_include_directories(EchoApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

