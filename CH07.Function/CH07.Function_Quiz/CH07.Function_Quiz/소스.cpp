#pragma warning(disable:4996)
#include <iostream>
//Quiz4
long double probability(unsigned numbers, unsigned picks, unsigned mega);
int main() {
	using namespace std;
	unsigned total, choices,mega;
	cout << "Enter number:\n";
	while ((cin >> total >> choices) && choices <= total) {
		cout << "Enter second range: \n";
		cin >> mega;
		cout << "Your probability wnning are 1 out of ";
		cout << probability(total, choices,mega) << endl;
		cout << "Enter two numbers again. (Enter q to exit): ";
	}
	cout << "Exit program.\n";
	return 0;
}
long double probability(unsigned numbers, unsigned picks, unsigned mega) {
	long double result = 1.0;
	unsigned n, p;
	for (n = numbers, p = picks; p > 0; n--, p--) {
		result = result * n / p;
	}
	result = result / mega;
	return result;
}