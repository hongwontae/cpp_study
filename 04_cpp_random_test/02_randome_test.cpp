#include <iostream>
#include <random>

int random_number_2() {
    std::random_device rd;

    std::mt19937 gen(rd());

    std::uniform_int_distribution<int> dist(1, 10);

    for (int i = 0; i < 5; i++) {
        std::cout << dist(gen) << '\n';
    }

    return 0;
}