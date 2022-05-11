#pragma warning(disable:4996)
//texttin1.cpp
#include <iostream>
int main() {
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter text; Enter # to end:\n";
	cin >> ch;
	while (ch != '#') {
		cout << ch;
		++count;
		cin >> ch;
	}
	cout << endl << count << " read the text.\n";
	return 0;
}