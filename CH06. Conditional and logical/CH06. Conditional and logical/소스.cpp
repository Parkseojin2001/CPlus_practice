#pragma warning(disable:4996)
#include<iostream>
//or.cpp
int main() {
	using namespace std;
	cout << "This program will reformat the hard disk\n"
		"All data on the hard disk will be erased.\n"
		"Do you want to continue? <y/n> ";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "I have clearly warned you.\a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "This is a wise choice. Quit the program.\n";
	else
		cout << "You did not enter y or n.\n"
		"Could not follow instruction. "
		"I'll empty the Recycle Kin and clean the disk.\n";
	return 0;
}