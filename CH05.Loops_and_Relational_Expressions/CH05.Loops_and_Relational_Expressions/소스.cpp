#pragma warning(disable:4996)
//num_test.cpp
#include <iostream>
int main() {
	using namespace std;
	cout << "Enter the count start value: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--) {
		cout << "i = " << i << endl;
	}
	cout << "i = " << i << ", so loop ends.\n";
	return 0;
}