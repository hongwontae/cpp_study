#include <iostream>
#include <cstring>
#include "oop_test.h";

using namespace std;

class Student {

private :
	string m_name;
	int m_age;


public :
	void set_init(const string & name, const int & age) {
		m_name = name;
		m_age = age;
	}

	string get_name() {
		return m_name;
	}

	int get_age() {
		return m_age;
	}

	void print_all() {
		cout << m_name << endl;
		cout << m_age << endl;
	}

	void copy_from(const Student & stu) {
		m_name = stu.m_name;
		m_age = stu.m_age;
	}


};


int main(void) {

	//Student student;
	//student.set_init("hong_won_tae", 20);
	//student.print_all();

	//Student student2;
	//student2.copy_from(student);
	//student2.print_all();

	fraction_oop_test();

	return 0;
}

