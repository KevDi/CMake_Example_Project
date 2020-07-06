#include "conversion.hpp"

#include <bitset>

std::string binary_representation(const int decimal) {
    return std::bitset<8>(decimal).to_string();
}