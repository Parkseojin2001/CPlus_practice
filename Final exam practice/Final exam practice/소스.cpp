#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class student {
	int id;
	char name[20];
public:
	void getstudent() {
		cout << "Enter Student name: ";
		cin >> name;
		cout << "ID: ";
		cin >> id;
	}
	void putstudent() {
		cout << "Name: " << name << endl;
		cout << "ID: " << id << endl;
	}
};
class marks {
protected:
	int m1, m2, m3;
public:
	void getmarks() {
		cout << "Enter three marks: ";
		cin >> m1 >> m2 >> m3;
	}
	void putmarks() {
		cout << "M1: " << m1 << endl;
		cout << "M2: " << m2 << endl;
		cout << "M3: " << m3 << endl;
	}
};
class result :public student, public marks {
	int total;
	float average;
public:
	void show() {
		total = m1 + m2 + m3;
		average = total / 3.0;
		cout << "Total: " << total << endl;
		cout << "Average: " << average << endl;
	}
};
int main() {
	result obj;
	obj.getstudent();
	obj.getmarks();
	obj.putstudent();
	obj.putmarks();
	obj.show();
	return 0;

}