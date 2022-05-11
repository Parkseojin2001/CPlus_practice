#pragma warning(disable:4996)
#include <iostream>
#include <string>
int main() {
	using namespace std;
	int num;
	cout << "Enter the number of lines ot output: ";
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			cout << ".";
		}
		for (int j = num - 1 - i; j < num; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}