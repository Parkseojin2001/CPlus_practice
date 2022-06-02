#pragma warning(disable:4996)
#include <iostream>
//Quiz5
int factorial(int);
int main() {
	using namespace std;
	int N;;
	while (1) {
		cout << "Enter number: ";
		if (!(cin >> N))
			break;
		cout << N << "! = " << factorial(N) << endl;
	}
	return 0;
}
int factorial(int n) {
	if (n > 0) {
		return n * factorial(n - 1);
	}
	else
		return 1;
}