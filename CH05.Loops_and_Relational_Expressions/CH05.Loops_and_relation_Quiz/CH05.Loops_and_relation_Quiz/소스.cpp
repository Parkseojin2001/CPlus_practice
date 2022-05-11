#pragma warning(disable:4996)
#include <iostream>
int main() {
	using namespace std;
	double A = 10000, B = 10000;
	int year=0;
	do {
		A += 10000 * 0.1;
		B += B * 0.05;
		year++;
	} while (A > B);
	cout << "A's investment value: " << A << endl;
	cout << "B's investment value: " << B << endl;
	cout << "Year: " << year << endl;
	return 0;
}