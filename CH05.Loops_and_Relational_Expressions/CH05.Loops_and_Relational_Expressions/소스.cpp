#pragma warning(disable:4996)
//textin2.cpp
#include <iostream>
int main() {
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter text; Enter # to end:\n";
	cin.get(ch);
	while (ch != '#') {
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " read the text.\n";
	return 0;
}