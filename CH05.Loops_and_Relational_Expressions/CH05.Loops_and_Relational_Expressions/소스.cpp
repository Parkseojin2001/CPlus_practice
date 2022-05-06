#pragma warning(disable:4996)
//compstr2.cpp
#include <iostream>
#include<string>
int main() {
	using namespace std;
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++) {
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After the loop ends the word is " << word << endl;
	return 0;
}