#pragma warning(disable:4996)
#include<iostream>
//ifelse.cpp
int main() {
	using namespace std;
	char ch;
	cout << "If you type it, it will repeat.\n";
	cin.get(ch);
	while (ch != '.') {
		if (ch == '\n')
			cout << ch;
		else
			cout << ++ch;
		cin.get(ch);

	}
	cout << "\nSorry for confusion.\n";
	return 0;
}