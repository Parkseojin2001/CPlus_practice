#pragma warning(disable:4996)
#include <iostream>
//Quiz3
using namespace std;
class shape { //create class for width and height
protected:
	int width = 10;
	int height = 5;
};
class rectangle :public shape {  //create class that prints the area of a rectangle
public:
	void cal_r() { //Define function to print the area of a rectangle
		int area_r;  //Declaration variable to store the area
		area_r = width * height;   //calculate the area of a rectangle
		cout << "Area of area_r: " << area_r << endl;   //print the area of a rectangle
	}
};
class triangle :public shape {  //create class that prints the area of a triangle
public:
	void cal_t() {   //Define function to print the area of a rectangle
		int area_t;  //Declaration valriable to store the area
		area_t = width * height / 2;  //calculate the area of a triangle
		cout << "Area of triangle: " << area_t << endl; //print the area of a rectangle
	}
};
int main() {
	rectangle A;  //declaration object
	triangle B;
	A.cal_r();  //call function to print the area of a rectangle
	B.cal_t(); //call function to print the area of a triangle
	return 0;
}