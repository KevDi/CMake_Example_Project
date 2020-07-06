#include <iostream>

#include "conversion.hpp"
#include "evolution/evolution.hpp"
#include "initial/initial.hpp"
#include "io/io.hpp"
#include "parser/parser.hpp"

int main(int argc, char* argv[]) {
    int length, num_steps, rule_decimal;
    std::tie(length, num_steps, rule_decimal) = parse_arguments(argc, argv);

    std::cout << "length: " << length << '\n';
    std::cout << "number of steps: " << num_steps << '\n';
    std::cout << "rule: " << rule_decimal << '\n';

    std::string rule_binary = binary_representation(rule_decimal);

    std::vector<int> row = initial_distribution(length);

    print_row(row);

    for (int step = 0; step < num_steps; ++step) {
        row = evolve(row, rule_binary);
        print_row(row);
    }
}