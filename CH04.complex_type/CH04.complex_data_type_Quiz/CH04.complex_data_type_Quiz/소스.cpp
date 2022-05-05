#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
//Quiz 8
using namespace std;
struct pizza {
	string BrandName;
	double diameter;
	double weight;
};
int main() {
	pizza *menu = new pizza;
	cout << "Pizza diameter: ";
	cin >> menu->diameter;
	cin.get();
	cout << "Company name: ";
	getline(cin, menu->BrandName);
	cout << "Pizza weight: ";
	cin >> menu->weight;
	cout << menu->BrandName << endl
		<< menu->diameter << endl
		<< menu->weight<<endl;
	return 0;
}