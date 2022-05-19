#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<string.h>
#include<cctype>
int main() {
	using namespace std;
	string str;
	int vowel = 0, consonant = 0, etc = 0;
	cout << "Enter the words. (To end, q.)\n";
	cin >> str;
	while (str != "q") {
		if (isalpha(str[0])) {
			switch (str[0]) {
			case 'a':
			case 'A':
				vowel++;break;
			case 'e':
			case'E':
				vowel++;break;
			case'i':
			case'I':
				vowel++;break;
			case'o':
			case'O':
				vowel++;break;
			case'u':
			case'U':
				vowel++;break;
			default:
				consonant++;break;
			}
		}
		else
			etc++;
		cin >> str;
	}
	cout << "Number of words that begin with a vowel: " << vowel << endl;
	cout << "Number of words that begin with a consonant: " << consonant << endl;
	cout << "Etc: " << etc << endl;
	return 0;
}