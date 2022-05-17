#pragma warning(disable:4996)
#include <iostream>
//Quiz2
using namespace std;
class Area {    //Class to find the area of a rectangle
private:
	double a, b;  //variable declaration
public:
	void print_A() {  //define a function to print the area
		cin >> a;
		cin >> b;
		cout << "Area: " << a * b << endl;
	}
};
class Perimeter { //Class to fint the perimeter of a rectangle
private:
	double a, b;  //variable declaration
public:
	void print_P() {  //define a function to print the perimeter
		cin >> a;
		cin >> b;
		cout << "Perimeter: " << 2 * (a + b) << endl;
	}
};
int main() {
	Area r1; //Object of class declaration
	Perimeter r2;
	r1.print_A();  //function call
	r2.print_P();
	return 0;
}