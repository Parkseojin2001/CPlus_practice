#pragma warning(disable:4996)
#include<iostream>
//more_and.cpp
const char* qualify[4] = {
	"10000m Run",
	"Sand Wrestling",
	"Beach Wolley",
	"Boomerang Throw"
};
int main() {
	using namespace std;
	int age;
	cout << "Enter your age: ";
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "You can participate in " << qualify[index] << ".\n";
	return 0;
}