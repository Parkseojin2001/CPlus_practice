#pragma warning(disable:4996)
#include <iostream>
#include <string>
int main() {
	using namespace std;
	string word;
	int count = 0;
	cout << "Enter English words(type done to end):" << endl;
	while (word!="done") {
		cin >> word;
		count++;
	}
	cout << "A total of " << count-1 << " words were entered.";
	return 0;
}