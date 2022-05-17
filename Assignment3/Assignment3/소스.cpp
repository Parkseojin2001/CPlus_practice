#pragma warning(disable:4996)
#include <iostream>
#include <string>
//Quiz4
using namespace std;
class mother {  //create class for age and name
protected:
	int age;   //declaration age variable
	string name;   //declaration name variable
public:
	void getdata() {   //define a function to enter the age and name of an animal
		cout << "Age: ";
		cin >> age;  //Input animal age
		cout << "Name: ";
		cin >> name;   //Input animal name
	}
};
class Zebra :public mother {  //craete class about animal information
protected:
	string contry = "Africa";  //declaration place of origin and save origin of  a animal
public:
	void print_z(){   //define a function to print the age, name and place of origin of an animal
		cout << "Zebra name: " << name << endl;   //print name
		cout << "Zebra age: " << age << endl;  //print age
		cout << "Zebra place of origin: " << contry << endl;  //print place of orign
	}
};
class Dolphin :public mother {  //create class aobut animal information
protected:
	string contry = "Korea";  //declaration place of orign and save origin of a animal
public:
	void print_d(){  //define a function to print the age, name and place of origin of an animal
		cout << "Dolphin name: " << name << endl;  //print name
		cout << "Dolphin age: " << age << endl;  //print age
		cout << "Dolphin place of origin: " << contry << endl;  //print place of orgin
	}
};
int main() {
	Zebra z1;   //declaration object
	Dolphin d1;
	z1.getdata();  //Call 'getdata()'function
	d1.getdata();
	z1.print_z();  //Call 'print_z()'function
	d1.print_d();  //Call 'print_d()'function
	return 0;
}