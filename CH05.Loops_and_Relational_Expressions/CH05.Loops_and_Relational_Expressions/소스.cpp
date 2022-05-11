#pragma warning(disable:4996)
//textin3.cpp
#include <iostream>
int main() {
	using namespace std;
	char ch;
	int count = 0;
	cin.get(ch);
	while (!cin.fail()) {
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << count << " read the text.\n";
	return 0;
}