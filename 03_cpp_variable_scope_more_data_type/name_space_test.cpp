#include <iostream>

namespace a {
	void print(int a) {
		std::cout << a << std::endl;
	}
}

namespace b {
	void print(int a) {
		std::cout << a << std::endl;
	}
}


int namespace_test() {

	using namespace std;

	a::print(10);
	b::print(20);

	{
		using a::print;
		print(10);
	}

	{
		using b::print;
		print(200);

	}



	return 0;
}