#include <iostream>

int main(void) {

	int x(0);

	std::cout << x << std::endl;

	{
		int x = 10;
		std::cout << x << std::endl;

	}

	{
		std::cout << x << std::endl;

	}

	std::cout << x << std::endl;



	return 0;
}