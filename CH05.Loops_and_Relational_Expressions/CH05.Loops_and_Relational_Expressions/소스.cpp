#pragma warning(disable:4996)
//compstr1.cpp
#include <iostream>
#include<cstring>
int main() {
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++) {
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After the loop ends the word is " << word << endl;
	/* strcmp(word,"mate")
	   = strcmp(word,"mate") != 0 */
	return 0;
}