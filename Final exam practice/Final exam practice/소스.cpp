#pragma warning(disable:4996)
#include <iostream>
using namespace std;
int main() {
	int* ptr;
	float* q;
	ptr = new int;
	q = new float;
	*ptr = 10;
	*q = 5.5;
	cout << ptr << endl << q << endl;
	cout << *ptr << endl << *q << endl;
	return 0;
}