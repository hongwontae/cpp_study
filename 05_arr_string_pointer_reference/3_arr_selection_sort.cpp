#include <iostream>


int selection_sort_test(void) {
	

	int arr_3 []  = {100, 20, 50, 40, 101, 52};

	size_t length = 6;


	for (int i = 0; i < length - 1; ++i) {
		
		int min_index = i;

		for (int j = i + 1; j < length; ++j) {
			if (arr_3[min_index] > arr_3[j]) {
				min_index = j;
			}
		}

		if (min_index != i) {
			int temp = arr_3[i];
			arr_3[i] = arr_3[min_index];
			arr_3[min_index] = temp;
		}

	}

	for (int i = 0; i < length; ++i) {

		std::cout << arr_3[i] << std :: endl;

	}	




	return 0;
}