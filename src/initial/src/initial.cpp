#include "initial/initial.hpp"

#include <boost/regex.hpp>

std::vector<int> initial_distribution(const int length) {
    std::vector<int> result(length, 0);
    result[length / 2] = 1;

    boost::regex pat("^Subject:");

    return result;
}