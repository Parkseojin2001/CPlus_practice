#pragma warning(disable:4996)
//textin4.cpp
#include <iostream>
int main() {
	using namespace std;
	int ch;
	int count = 0;
	while ((ch = cin.get()) != EOF) {
		cout.put(char(ch));
		++count;
	}
	cout << count << " read the text.\n";
	return 0;
}