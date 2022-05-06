#pragma warning(disable:4996)
//forstr1.cpp
#include <iostream>
#include<string>
int main() {
	using namespace std;
	cout << "Enter one word: ";
	string word;
	cin >> word;
	for (int i = word.size() - 1; i >= 0; i--) {
		cout << word[i];
	}
	cout << "\nEnd\n";
	return 0;
}