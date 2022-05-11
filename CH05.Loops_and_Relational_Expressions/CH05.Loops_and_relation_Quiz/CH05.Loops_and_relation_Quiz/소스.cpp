#pragma warning(disable:4996)
#include <iostream>
int main() {
	using namespace std;
	int n,sum=0;
	cout << "Enter a number(Exit when 0 is input): ";
	cin >> n;
	while (n != 0) {
		sum += n;
		cout << "Enter a number(Exit when 0 is input): ";
		cin >> n;
	}
	cout << "Sum: " << sum << endl;
	return 0;
}