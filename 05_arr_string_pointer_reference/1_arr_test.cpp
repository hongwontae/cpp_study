#include <iostream>
#include "arr_test.h"

using namespace std;

void do_something(int arr_1 [3]) {

	cout << &arr_1 << endl;
	cout << arr_1 << endl;
	cout << *arr_1 << endl;


}


int main(void) {


	int arr_1[] = { 1,2,3 };

	//cout << arr_1 << endl;
	//cout << &arr_1 << endl;

	//do_something(arr_1);

	//arr_test_2();

	//selection_sort_test();
	//bubble_sort_test();
	//multi_arr_test();
	//pointer_test();
	pointer_test_2();


	return 0;
}