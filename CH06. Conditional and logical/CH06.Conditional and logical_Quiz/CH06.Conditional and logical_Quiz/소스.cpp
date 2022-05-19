#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;
struct bop {
	string fullname;
	string title;
	string bopname;
	int prefernece;
};
int main() {
	bop list[5] = {
		{"Wimp Macho","CEO","AAA",0},
		{"Raki Rhodes","Junior Programmer","BBB",1},
		{"Celia Laiter","doctor","MIPS",2},
		{"Hoppy Hipman","Analyst Trainee","DDD",1},
		{"Pat Hand","Engineer","LOPPY",2}
	};
	char c;
	cout << "Benevolent Order of Programmers\n"
		<< "a. Reading by full name             b. Reading by title\n"
		<< "c. Reading by BOP_ID                d. Reading by preference\n"
		<< "q. Exit\n";
	do {
		cout << "Choose what you want: ";
		cin >> c;
		switch (c) {
		case 'a':
			for (int i = 0; i < 5; i++)
				cout << list[i].fullname << endl;
			break;
		case 'b':
			for (int i = 0; i < 5; i++)
				cout << list[i].title << endl;
			break;
		case'c':
			for (int i = 0; i < 5; i++)
				cout << list[i].bopname << endl;
			break;
		case'd':
			for (int i = 0; i < 5; i++) {
				if (list[i].prefernece == 0)
					cout << list[i].fullname << endl;
				else if (list[i].prefernece == 1)
					cout << list[i].title << endl;
				else
					cout << list[i].bopname << endl;
			}
			break;
		case 'q':
			cout << "End the program.\n";
			break;
		}
	} while (c != 'q');
	return 0;
}