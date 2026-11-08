#include <iostream>


int pointer_test_2() {

	int a = 10;
	int& ref = a;

	using namespace std;

	cout << a << " " << ref << endl;
	cout << &a << " " << &ref << endl;


	return 0;
}