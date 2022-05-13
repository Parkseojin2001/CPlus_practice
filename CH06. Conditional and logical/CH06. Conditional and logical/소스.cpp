#pragma warning(disable:4996)
#include<iostream>
#include<cctype>
//cctypes.cpp
int main() {
	using namespace std;
	cout << "Enter text to be analyzed. "
		"End of the input with @\n";
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	cin.get(ch);
	while (ch != '@') {
		if (isalpha(ch))
			chars++;
		else if (isspace(ch))
			whitespace++;
		else if (isdigit(ch))
			digits++;
		else if (ispunct(ch))
			punct++;
		else
			others++;
		cin.get(ch);
	}
	cout << "Char " << chars << ", "
		<< "Whitespace " << whitespace << ", "
		<< "Digit " << digits << ", "
		<< "Punct " << punct << ", "
		<< "Others " << others << endl;
	return 0;
}