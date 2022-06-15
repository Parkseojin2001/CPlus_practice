#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class student {
private:
	int id;
	char name[20];
public:
	void getstudent() {
		cout << "Enter student name: ";
		cin >> name;
		cout << "Enter id: ";
		cin >> id;
	}
	void putstudent() {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
	}
};
class computer :private student {
	float height, weight;
public:
	void getphysical() {
		getstudent();
		cout << "Enter student height and weight: ";
		cin >> height >> weight;
	}
	void putphysical() {
		putstudent();
		cout << "Height: " << height << endl;
		cout << "Weight: " << weight << endl;
	}
};
int main() {
	computer obj;
	obj.getphysical();
	obj.putphysical();
	return 0;
}
