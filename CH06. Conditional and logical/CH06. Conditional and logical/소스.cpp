#pragma warning(disable:4996)
#include<iostream>
//enum.cpp
enum{red, orange,yellow,green,blue,violet,indigo};
int main() {
	using namespace std;
	cout << "Enter color code(0,1,2,3,4,5,6): ";
	int code;
	cin >> code;
	while (code >= red && code <= indigo) {
		switch (code) {
		case red: cout << "Lips were red.\n"; break;
		case orange:cout << "Hair was orange.\n"; break;
		case yellow:cout << "Shoes were yellow.\n"; break;
		case green:cout << "Fingernail was green.\n"; break;
		case blue:cout << "Sweater was blue.\n"; break;
		case violet:cout << "Snow was vioet.\n"; break;
		case indigo: cout << "Atmosphere was indigo.\n"; break;
		}
		cout << "Enter color code(0,1,2,3,4,5,6): ";
		cin >> code;
	}
	cout << "Quit the program.\n";
	return 0;
}