#include <iostream>
#include <typeinfo>



int multi_arr_test() {

	using namespace std;

	int double_arr[3][3] = {
		{ 1,2,3 },
		{ 4,5,6 },
		{ 7,8,9 }
	};

	cout << double_arr << endl;
	cout << *(double_arr+1) << endl;
	cout << &double_arr << endl;
	cout << typeid(double_arr).name() << endl;

	cout << &double_arr[0] << endl;
	cout << double_arr[0] << endl;
	cout << *double_arr[0] << endl;
	cout << typeid(double_arr[0]).name() << endl;

	cout << &double_arr[0][0] << endl;
	cout << *&double_arr[0][0] << endl;
	cout << typeid(double_arr[0][0]).name() << endl;

	

	return 0;
}