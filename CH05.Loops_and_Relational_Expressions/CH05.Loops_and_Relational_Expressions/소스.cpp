#pragma warning(disable:4996)
//while.cpp
#include <iostream>
const int ArSize = 20;
int main() {
	using namespace std;
	char name[ArSize];
	cout << "Enter your name: ";
	cin >> name;
	cout << "Your name, one character per line\n";
	cout << "Shown with ASCII code like this.\n";
	int i = 0;
	while (name[i] != '\0') {
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	return 0;
}