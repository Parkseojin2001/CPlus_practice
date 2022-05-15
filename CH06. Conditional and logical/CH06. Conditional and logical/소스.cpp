#pragma warning(disable:4996)
#include<iostream>
//jump.cpp
const int ArSize = 80;
int main() {
	using namespace std;
	char line[ArSize];
	int spaces = 0;
	cout << "Enter text:\n";
	cin.get(line, ArSize);
	cout << "All text:\n" << line << endl;
	cout << "Text to first period:\n";
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];
		if (line[i] == '.')
			break;
		if (line[i] != ' ')
			continue;
		spaces++;
	}
	cout << "\nBlank is " << spaces << endl;
	cout << "Exit\n";
	return 0;
}