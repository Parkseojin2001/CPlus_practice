#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
//Quiz 7
using namespace std;
struct pizza {
	string BrandName;
	double diameter;
	double weight;
};
int main() {
	pizza menu;
	cout << "Company name: ";
	getline(cin, menu.BrandName);
	cout << "Pizza diameter: ";
	cin >> menu.diameter;
	cout << "Pizza weight: ";
	cin >> menu.weight;
	cout << menu.BrandName << endl
		<< menu.diameter << endl
		<< menu.weight<<endl;
	return 0;
}