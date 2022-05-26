#pragma warning(disable:4996)
#include <iostream>
//twoarg.cpp
using namespace std;
void n_chars(char, int);
int main() {
	int times;
	char ch;
	cout << "Enter one character: ";
	cin >> ch;
	while (ch != 'q') {
		cout << "Enter an integer: ";
		cin >> times;
		n_chars(ch, times);
		cout << "\n Enter another letter to continue, "
			"press q to exit: ";
		cin >> ch;
	}
	cout << "The current times value is " << times << endl;
	cout << "Exit program.\n";
	return 0;
}
void n_chars(char c, int n) {
	while (n-- > 0) {
		cout << c;
	}
}