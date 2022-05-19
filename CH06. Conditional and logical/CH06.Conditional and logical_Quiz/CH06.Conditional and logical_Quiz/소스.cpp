#pragma warning(disable:4996)
#include<iostream>
int main() {
	using namespace std;
	double income, tax = 0;
	cout << "Enter your income: ";
	while (cin >> income && income > 0) {
		if (income <= 5000)
			tax = 0;
		else if (income > 5000 && income <= 10000)
			tax += income * 0.1;
		else if (income>10000 && income <= 20000)
			tax += income * 0.15;
		else if(income >= 35000) {
			income -= 35000;
			tax += income * 0.2+4000;
		}
		cout << "Tax: " << tax << endl;
		cout << "Enter your income: ";
	}
	return 0;
}
