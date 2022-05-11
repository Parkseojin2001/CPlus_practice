#pragma warning(disable:4996)
//textin3.cpp
#include <iostream>
int main() {
	using namespace std;
	char ch;
	int count = 0;
	while (cin.get(ch)) {
		cout << ch;
		++count;
	}
	cout << count << " read the text.\n";
	return 0;
}