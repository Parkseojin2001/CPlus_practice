#pragma warning(disable:4996)
#include <iostream>
//protos.cpp
void cheers(int);
double cube(double x);
int main(void) {
	using namespace std;
	cheers(5);
	cout << "Enter one number: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "A cube with a side length of " << side << " cm has a volume of ";
	cout<< volume <<" cm^3\n";
	cheers(cube(2));
	return 0;
}
void cheers(int n) {
	using namespace std;
	for (int i = 0; i < n; i++) {
		cout << "Cheers! ";
	}
	cout << endl;
}
double cube(double x) {
	return x * x * x;
}