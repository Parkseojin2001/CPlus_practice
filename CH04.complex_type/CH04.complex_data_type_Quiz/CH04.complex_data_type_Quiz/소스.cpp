#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
int main() {
	using namespace std;
	char grade;
	int age;
	string first, last;
	cout << "First Name: ";
	getline(cin, first);
	cout << "Last Name: ";
	getline(cin, last);
	cout << "The grade student wants: ";
	cin >> grade;
	cout << "Age: ";
	cin >> age;
	grade += 1;
	cout << "Name: " << last << ", " << first << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << endl;
	return 0;
}