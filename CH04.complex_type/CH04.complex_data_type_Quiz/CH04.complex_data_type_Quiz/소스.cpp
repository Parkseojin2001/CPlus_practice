#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
//Quiz 6
using namespace std;
struct CandyBar {
	string BrandName;
	double weight;
	int cal;
};
int main() {
	CandyBar snack;
	cout << "Enter Brand Name: ";
	getline(cin, snack.BrandName);
	cout << "Enter Weight: ";
	cin >> snack.weight;
	cout << "Enter cal: ";
	cin >> snack.cal;
	cout << snack.BrandName << endl
		<< snack.weight << endl
		<< snack.cal;
	return 0;
}