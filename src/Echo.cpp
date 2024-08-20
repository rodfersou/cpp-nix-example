#include "Echo.hpp"
#include <algorithm>

std::string Echo::repeat(const std::string& sound) {
    return sound;
}

std::string Echo::loudly(const std::string& sound) {
    std::string loudSound = sound;
    std::transform(loudSound.begin(), loudSound.end(), loudSound.begin(), ::toupper);
    return loudSound;
}
