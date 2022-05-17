#pragma warning(disable:4996)
#include <iostream>
//Quiz2
using namespace std;
class Area {    //Class to find the area of a rectangle
public:
	double area(double a,double b) {  //define a function to calculate the area
		return a * b;
	}
};
class Perimeter { //Class to find the perimeter of a rectangle
public:
	double perimeter(double a,double b) {  //define a function to calculate the perimeter
		return 2 * (a + b);
	}
};
class rectangle :public Area, public Perimeter { //Class to print area and perimeter
	double a, p,n,m;   //variable declaration 
	Area A;   // declaration object
	Perimeter P;
public:
	void show() {   //define a function to show area and perimeter
		cin >> n;  //Enter horizontal
		cin >> m;  //Enter length
		a = A.area(n,m);
		p = P.perimeter(n,m);
		cout << "Area: " << a << endl;   //Print rectangle area
		cout << "Perimeter " << p << endl;   //Print rectangle area
	}
};
int main() {
	rectangle r;   //declaration object
	r.show();   //Call a function to show rectangle's area and perimeter
	return 0;
}