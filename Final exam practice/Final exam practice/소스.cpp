#pragma warning(disable:4996)
#include <iostream>
using namespace std;
template<class t>
t big(t a, t b) {
	if (a > b)
		return a;
	else
		return b;
}
int main() {
	cout << big(10, 13) << endl;
	cout << big(14.5, 15.6);
	return 0;
}