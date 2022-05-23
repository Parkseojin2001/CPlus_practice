#pragma warning(disable:4996)
#include <iostream>
//calling.cpp
void simple();
int main() {
	using namespace std;
	cout << "In main, I call simple():\n";
	simple();
	cout << "In main, I exit simple().\n";
	return 0;
}
void simple() {
	using namespace std;
	cout << "Here is the simple() function.\n";
}
