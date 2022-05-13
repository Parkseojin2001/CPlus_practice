#pragma warning(disable:4996)
#include<iostream>
//if.cpp
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.') {
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << "The total number of characters in this sentence is " << total << " and, ";
	cout << "among them, the blank is " << spaces << endl;
	return 0;
}