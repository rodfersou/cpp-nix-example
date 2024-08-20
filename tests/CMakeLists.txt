find_package(Boost REQUIRED COMPONENTS unit_test_framework)

enable_testing()

add_executable(EchoTests EchoTests.cpp ../src/Echo.cpp)

target_link_libraries(EchoTests Boost::unit_test_framework)

add_test(NAME EchoTests COMMAND EchoTests)

