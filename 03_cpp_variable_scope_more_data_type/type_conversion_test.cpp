#include <iostream>
#include <typeinfo>


int type_conversion() {

	using namespace std;

	cout << typeid(123).name() << endl;
	
	double pi = 3.14;
	int a = int(pi);

	int c = 10000;
	char d = char(c);


	return 0;
}