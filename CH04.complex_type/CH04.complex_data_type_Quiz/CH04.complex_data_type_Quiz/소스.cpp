#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
//Quiz2
int main() {
	using namespace std;
	string name, dessert;
	cout << "Enter your name: \n";
	getline(cin, name);
	cout << "Enter your favorite dessert: \n";
	getline(cin, dessert);
	cout << "I will prepare a delicious " << dessert << ". Mr." << name << "!";
	return 0;
}