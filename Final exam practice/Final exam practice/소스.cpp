#pragma warning(disable:4996)
#include <iostream>
using namespace std;
template <class t>
t sum(t x[], int s) {
	t sum = 0;
	for (int i = 0; i < s; i++)
		sum += x[i];
	return sum;
}
int main() {
	int x[5] = { 0,10,15,14,20 }; //class t data type: int
	float y[3] = { 10.5,2.5,1.5 }; //class t data type: float
	cout << sum(x, 5) << endl;
	cout << sum(y, 3) << endl;
	return 0;
}