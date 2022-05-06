#pragma warning(disable:4996)
//block.cpp
#include <iostream>
int main() {
	using namespace std;
	cout << "Sum and average 5 values.\n";
	cout << "Enter 5 values.\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++) {
		cout << "value " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "All 5 values have been entered.\n";
	cout << "The sum of the 5 entered values is " << sum << endl;
	cout << "The average of the 5 entered values is " << sum / 5 << endl;
	return 0;
}