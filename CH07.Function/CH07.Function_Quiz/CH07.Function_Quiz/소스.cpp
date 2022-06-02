#pragma warning(disable:4996)
#include <iostream>
//Quiz1
double avg(double, double);
int main() {
	using namespace std;
	double a, b,value;
	while (1) {
		cout << "Enter two number: ";
		cin >> a >> b;
		if (a == 0 || b == 0)
			break;
		value = avg(a, b);
		cout << "Answer: " << value << endl;
	}
	return 0;
}
double avg(double x, double y) {
	double result;
	result = 2.0 * x * y / (x + y);
	return result;
}