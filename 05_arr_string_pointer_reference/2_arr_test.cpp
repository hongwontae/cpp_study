#include <iostream>



int arr_test_2() {
	
	const int arr_2[] = { 10, 20, 30, 40, 50 };
	int max_value = 0;
	int total_value = 0;

	size_t total_length = sizeof(arr_2) / sizeof(arr_2[0]);

	for (int i = 0; i < total_length; ++i) {

		total_value += arr_2[i];

		max_value = max_value < arr_2[i] ? arr_2[i] : max_value;

	}

	std::cout << "total_value " << total_value << std::endl;
	std::cout << "max_value " << max_value << std::endl;
	

	return 0;

}