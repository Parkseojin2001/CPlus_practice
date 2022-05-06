#pragma warning(disable:4996)
//express.cpp
#include <iostream>
int main() {
	using namespace std;
	int x;
	cout << "The value of the substitution expression x = 100 is ";
	cout << (x = 100) << endl;
	cout << "x value = " << x << endl;
	cout << "Relational expression x < 3 integer value :";
	cout << (x < 3) << endl;
	cout << "Relational expression x > 3 integer value :";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "Relational expression x < bool value of 3 ";
	cout << (x < 3) << endl;
	cout << "Relational expression x > bool value of 3 ";
	cout << (x > 3) << endl;
	return 0;
}