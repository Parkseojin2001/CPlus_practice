#pragma warning(disable:4996)
#include <iostream>
#include <string.h>
using namespace std;
class student {
	int id;
	char name[30];
public:
	friend void operator>>(istream& in, student& s);
	friend void operator<<(ostream& out, student& s);
};
void operator>>(istream& in, student& s) {
	cout << "Enter student ID and name: ";
	in >> s.id >> s.name;
}
void operator<<(ostream& out, student& s) {
	out << "ID: " << s.id << endl;
	out << "Name: " << s.name;
}
int main() {
	student s;
	cin >> s;
	cout << s;
}