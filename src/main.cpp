#include "Echo.hpp"
#include <iostream>

int main() {
    Echo echo;
    for (int i = 0; i < 5; ++i) {
        std::cout << echo.repeat("Hello, World!") << std::endl;
    }
    return 0;
}

