#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
//Quiz3
int main() {
	using namespace std;
	char first[20],last[20],full[40];
	cout << "Enter your first name: ";
	cin.getline(first, 20);
	cout << "Enter your last name: ";
	cin.getline(last, 20);
	strcpy(full, last);
	strcat(full, ", ");
	strcat(full, first);
	cout << "If you make it into a single string: " << full << endl;
	return 0;
}
