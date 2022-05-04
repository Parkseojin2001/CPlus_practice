//use_new.cpp
#include <iostream>
int main() {
	using namespace std;
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;
	cout << "night value = ";
	cout << nights << ": memory location " << &nights << endl;
	cout << "int type ";
	cout << "value = " << *pt << ": memory location = " << pt << endl;
	double* pd = new double;
	*pd = 1000001.0;
	cout << "double type";
	cout << "value = " << *pd << ":memory location = " << pd << endl;
	cout << "pt size = " << sizeof(*pt) << endl;
	cout << "pd size = " << sizeof pd;
	cout << ": *pd size = " << sizeof(*pd) << endl;
	return 0;
}