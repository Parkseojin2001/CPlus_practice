#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<array>
using namespace std;
struct student {  //Declaration struct for student information
	string name;  //Student name variable
	int cplus, physics;  //Student subject score variable
};
int main() {
	array<struct student,3>info;   //Use array
	info[0].name = "Student A";   //struct array initialization
	info[0].cplus = 20;
	info[0].physics = 100;
	info[1].name = "Student B";
	info[1].cplus = 70;
	info[1].physics = 36;
	info[2].name = "Student C";
	info[2].cplus = 30;
	info[2].physics = 50;
	int order;
	cout << "1.Show All student information  2.Show one student information  3.Exit\n"; //Print menu that can be operated
	while (1) {
		cout << "Enter the menu number:";
		cin >> order;   //Select menu
		if (order == 1)   //Show all student information
			for (int i = 0; i < 3; i++) {
				cout << "Student Name: " <<info[i].name << endl;  //Print student name
				cout << "Student C++ score: " << info[i].cplus << endl;   //Print student c++ score
				cout << "Studnet Physics score: " << info[i].physics << endl;  //Print student physics score
			}
		else if (order == 2) {   //Show one student information
			int N;
			cout << "Select Student number: ";
			cin >> N;   //Enter the student number for which you want to print information
			cout << "Student Name: " << info[N - 1].name << endl;  //Print student name
			cout << "Student C++ score: " << info[N - 1].cplus << endl;  //Print student c++ score
			cout << "Studnet Physics score: " << info[N - 1].physics << endl;  //Print student physics score
		}
		else {
			cout << "-------- Exit--------";  // Exit program
			break;
		}
	}
	return 0;
}