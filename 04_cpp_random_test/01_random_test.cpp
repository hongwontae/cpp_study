#include <iostream>
#include <cstdlib>
#include "random_test.h"

int main() {
	int number = std::rand();

	std::cout << number << '\n';

	srand(static_cast<unsigned int> (time(nullptr)));

	for (int i = 0; i < 5; i++) {
		std::cout << std::rand() % 10 + 1 << std :: endl;
	}

	std::cout << std::endl;

	random_number_2();
	cin_test();

	return 0;
}