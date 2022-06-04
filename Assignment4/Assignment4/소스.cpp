#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<array>
using namespace std;
struct student {
	string name;
	int cplus, physics;
};
int main() {
	array<struct student,3>info;
	info[0].name = "Student A";
	info[0].cplus = 20;
	info[0].physics = 100;
	info[1].name = "Student B";
	info[1].cplus = 70;
	info[1].physics = 36;
	info[2].name = "Student C";
	info[2].cplus = 30;
	info[2].physics = 50;
	int order;
	cout << "1.Show All student information  2.Show one student information  3.Exit\n";
	while (1) {
		cout << "Enter the menu number:";
		cin >> order;
		if (order == 1)
			for (int i = 0; i < 3; i++) {
				cout << "Student Name: " <<info[i].name << endl;
				cout << "Student C++ score: " << info[i].cplus << endl;
				cout << "Studnet Physics score: " << info[i].physics << endl;
			}
		else if (order == 2) {
			int N;
			cout << "Select Student number: ";
			cin >> N;
			cout << "Student Name: " << info[N - 1].name << endl;
			cout << "Student C++ score: " << info[N - 1].cplus << endl;
			cout << "Studnet Physics score: " << info[N - 1].physics << endl;
		}
		else {
			cout << "-------- Exit--------";
			break;
		}
	}
	return 0;
}