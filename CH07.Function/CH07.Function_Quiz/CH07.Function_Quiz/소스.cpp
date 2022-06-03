#pragma warning(disable:4996)
#include <iostream>
//Quiz10
double calculate(double x, double y, double(*cal)(double, double));
double add(double x, double y);
double min(double x, double y);
int main() {
	using namespace std;
	double (*pf[2])(double, double) = { add,min };
	while (1) {
		double x, y;
		int n;
		cout << "Enter two number(If you want to exit,enter any character.): ";
		if (!(cin >> x >> y))
			break;
		cout << "Plus: 0        MInus: 1\n";
		cin >> n;
		double q = calculate(x, y, *pf[n]);
		cout << "Result: " << q << endl;
	}
}
double calculate(double x, double y, double(*cal)(double, double)) {
	return (*cal)(x, y);
}
double add(double x, double y) {
	return x+y;
}
double min(double x, double y) {
	return x - y;
}