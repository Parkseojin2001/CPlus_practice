#pragma warning(disable:4996)
#include<iostream>
//switch.cpp
using namespace std;
void showmenu();
void report();
void comfort();
int main() {
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5) {
		switch (choice) {
		case 1:cout << "\a\n";
			break;
		case 2:report();
			break;
		case 3:cout << "The boss was at the company today.\n";
			break;
		case 4:comfort();
			break;
		default:cout << "It cannot be selected.\n";
		}
		showmenu();
		cin >> choice;
	}
	cout << "Quit the program!\n";
	return 0;
}
void showmenu() {
	cout << "Choose one from 1, 2, 3, 4, 5:\n"
		"1) Alarm                 2) Report\n"
		"3) Alibi                 4) Encouragement\n"
		"5) Quit\n";
}
void report() {
	cout << "This quarter's business performance is very good\n"
		"Sales increased by 120% and costs decreased by 35%.\n";
}
void comfort() {
	cout << "The employees think you are the best CEO in the industry\n"
		"The board thinks you are the best CEO in the industry\n";
}