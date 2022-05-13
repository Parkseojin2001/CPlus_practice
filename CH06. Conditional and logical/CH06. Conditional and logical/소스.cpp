#pragma warning(disable:4996)
#include<iostream>
#include<climits>
//not.cpp
bool is_int(double);
int main() {
	using namespace std;
	double num;
	cout << "Enter an integer value: ";
	cin >> num;
	while (!is_int(num)) {
		cout << "This value cannot be assigned to type int. Please re-enter: ";
		cin >> num;
	}
	int val = int(num);
	cout << "The integer you entered is " << val << ".\n";
	return 0;
}
bool is_int(double x) {
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}