#pragma warning(disable:4996)
#include <iostream>
//lotto.cpp
using namespace std;
long double probability(unsigned numbers, unsigned picks);
int main() {
	using namespace std;
	double total, choices;
	cout << "Enter the number of total numbers and the number of numbers to be drawn:\n";
	while ((cin >> total >> choices) && choices <= total) {
		cout << "Your probability wnning are 1 out of ";
		cout << probability(total, choices) << endl;
		cout << "Enter two numbers again. (Enter q to exit): ";
	}
	cout << "Exit program.\n";
	return 0;
}
long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}