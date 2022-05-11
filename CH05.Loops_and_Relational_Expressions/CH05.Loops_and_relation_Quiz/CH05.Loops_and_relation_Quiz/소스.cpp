#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
int main() {
	using namespace std;
	char word[50];
	int count = 0;
	cout << "Enter English words(type done to end):" << endl;
	while (strcmp(word, "done")) {
		cin >> word;
		count++;
	}
	cout << "A total of " << count-1 << " words were entered.";
	return 0;
}