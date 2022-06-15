#pragma warning(disable:4996)
#include <iostream>
using namespace std;
template <class t>
t sum(t a, t b) {
	return a + b;
}
template <class t>
t sum(t a, t b, t c) {
	return a + b + c;
}
int main() {
	cout << sum(10, 20) << endl;
	cout << sum(10.1, 9.9) << endl;
	cout << sum(10.2, 8.1, 3.2) << endl;
	cout << sum(1, 4, 8);
	return 0;
}