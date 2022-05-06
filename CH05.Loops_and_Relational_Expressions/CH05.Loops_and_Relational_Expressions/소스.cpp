#pragma warning(disable:4996)
//dowhile.cpp
#include <iostream>
int main() {
	using namespace std;
	int n;
	cout << "From 1 to 10 ";
	cout << " Guesss my favorite number.\n";
	do {
		cin >> n;
	} while (n != 7);
	cout << "Correct. My favorite number is lucky seven 7\n";
	return 0;
}