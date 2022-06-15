#pragma warning(disable:4996)
#include <iostream>
using namespace std;
int main() {
	int* ptr;
	float* q;
	ptr = new int(10);
	q = new float(10.5);
	cout << ptr << endl << q << endl;
	cout << *ptr << endl << *q << endl;
	return 0;
}