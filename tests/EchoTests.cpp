#define BOOST_TEST_MODULE EchoTest
#include <boost/test/included/unit_test.hpp>
#include "../src/Echo.hpp"

BOOST_AUTO_TEST_CASE(should_return_the_string) {
    Echo echo;
    BOOST_TEST(echo.repeat("a sound") == "a sound");
}

BOOST_AUTO_TEST_CASE(should_return_the_string_in_all_caps) {
    Echo echo;
    BOOST_TEST(echo.loudly("a loud sound") == "A LOUD SOUND");
}

