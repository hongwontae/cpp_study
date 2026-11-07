#include <iostream>
#include <typeinfo>


int pointer_test(void) {

	using namespace std;

	int x = 10;
	int *ptr = &x;

	cout << x << endl;
	cout << typeid(x).name()<< endl;

	cout << &x << endl;
	cout << typeid(&x).name() << endl;



	return 0;
}