#pragma warning(disable:4996)
#include<iostream>
//condit.cpp
int main() {
	using namespace std;
	int a, b;
	cout << "Enter two intgers: ";
	cin >> a >> b;
	cout << "The greater of thw two is ";
	int c = a > b ? a : b;
	cout << c << endl;
	return 0;
}