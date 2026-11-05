#include <iostream>
#include <typeinfo>

int auto_test(void) {

	using namespace std;

	auto a = 10;
	auto b = 2.0;
	auto c = true;
	auto d = 1.23f;

	auto e = 1 / 2;
	auto f = 10.0 / 20.0;

	cout << a << endl;
	cout << typeid(a).name() << endl;

	cout << b << endl;
	cout << typeid(b).name() << endl;


	cout << c << endl;
	cout << typeid(c).name() << endl;


	cout << d << endl;
	cout << typeid(d).name() << endl;


	cout << e << endl;
	cout << typeid(e).name() << endl;


	cout << f << endl;
	cout << typeid(f).name() << endl;




	return 0;
}