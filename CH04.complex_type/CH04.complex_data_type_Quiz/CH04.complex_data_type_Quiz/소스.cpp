#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
//Quiz 4
int main() {
	using namespace std;
	string first, last, full;
	cout << "Enter your first name: ";
	getline(cin, first);
	cout << "Enter your last name: ";
	getline(cin, last);
	full = last + ", " + first;
	cout << "If you make it into a single string: " << full << endl;
	return 0;
}
