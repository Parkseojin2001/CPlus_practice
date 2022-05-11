#pragma warning(disable:4996)
#include <iostream>
#include <string>
using namespace std;
struct car {
	string CompanyName;
	int year;
};
int main() {
	int num;
	cout << "How many cars would you like to list? ";
	cin >> num;
	cin.get();
	car *list = new car[num];
	for (int i = 0; i < num; i++) {
		cout << "Car #" << i + 1 << ":\n";
		cout << "Car company: ";
		cin >> list[i].CompanyName;
		cout << "Year of manufacture: ";
		cin >> list[i].year;
		cin.get();
	}
	cout << "Here is a list of cars you currently own.\n";
	for (int i = 0; i < num; i++) {
		cout << list[i].year << " " << list[i].CompanyName << endl;
	}
	return 0;
}