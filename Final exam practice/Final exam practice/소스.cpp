#pragma warning(disable:4996)
#include <iostream>
using namespace std;
int big(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
}
double big(double a, double b) {
	if (a > b)
		return a;
	else
		return b;
}
int main() {
	cout << big(10, 13) << endl;
	cout << big(10.2, 14.5);
	return 0;
}