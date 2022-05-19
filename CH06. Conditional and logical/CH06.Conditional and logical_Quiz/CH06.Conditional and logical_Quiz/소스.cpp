#pragma warning(disable:4996)
#include<iostream>
#include<cctype>
int main() {
	using namespace std;
	char ch;
	do {
		cout << "Enter character: ";
		cin >> ch;
		if (islower(ch)) {
			ch = toupper(ch);
		}
		else if (isupper(ch)) {
			ch = tolower(ch);
		}
		cout << ch << endl;
	} while (ch != '@');
}