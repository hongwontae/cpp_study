#include <iostream>
#include "connection_test.h"

using namespace std;


int test_2() {

	static int aa = 1;

	aa++;

	cout << aa << endl;

	return 0;
}