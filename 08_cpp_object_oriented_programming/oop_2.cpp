#include <iostream>

using namespace std;

class Fraction {

private :
	int m_numerator;
	int m_denominator;

public :
	Fraction(const int numerator = 1, const int denominator = 1) {
		m_numerator = numerator;
		m_denominator = denominator;
	}

	void print() {
		cout << m_numerator << " / " << m_denominator << endl;
	}

};


int fraction_oop_test() {
	
	Fraction one_five (1, 5);
	one_five.print();



	return 0;
}