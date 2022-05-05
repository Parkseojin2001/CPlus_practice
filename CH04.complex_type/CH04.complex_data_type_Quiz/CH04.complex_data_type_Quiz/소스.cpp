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
	CandyBar snack[3];
	cout << "Enter Brand Name: ";
	getline(cin, snack[0].BrandName);
	cout << "Enter Weight: ";
	cin >> snack[0].weight;
	cout << "Enter cal: ";
	cin >> snack[0].cal;
	cin.get();
	cout << "Enter Brand Name: ";
	getline(cin, snack[1].BrandName);
	cout << "Enter Weight: ";
	cin >> snack[1].weight;
	cout << "Enter cal: ";
	cin >> snack[1].cal;
	cin.get();
	cout << "Enter Brand Name: ";
	getline(cin, snack[2].BrandName);
	cout << "Enter Weight: ";
	cin >> snack[2].weight;
	cout << "Enter cal: ";
	cin >> snack[2].cal;
	cout << snack[0].BrandName << endl
		<< snack[0].weight << endl
		<< snack[0].cal;
	cout << snack[1].BrandName << endl
		<< snack[1].weight << endl
		<< snack[1].cal;
	cout << snack[2].BrandName << endl
		<< snack[2].weight << endl
		<< snack[2].cal;
}