#include <iostream>
#include <typeinfo>


int pointer_test(void) {


	int* ptr = new int(10);

	using namespace std;

	cout << ptr << endl;
	cout << *ptr << endl;

	const int* ptr_3 = new int(20);

	int bb = 20;

	//*ptr_3 = 20;
	ptr_3 = &bb;

	cout << ptr_3 << endl;
	cout << *ptr_3 << endl;

	const int* const ptr_4 = new int(10);

	//*ptr_4 = &bb;
	//ptr_4 = ptr_3;


	


	return 0;
}