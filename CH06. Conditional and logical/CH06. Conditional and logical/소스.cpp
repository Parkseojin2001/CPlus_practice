#pragma warning(disable:4996)
#include<iostream>
//cingolf.cpp
const int Max = 5;
int main() {
	using namespace std;
	int golf[Max];
	cout << "Enter golf score.\n";
	cout << "A total of " << Max << " rounds must be entered.\n";
	int i;
	for (i = 0; i < Max; i++) {
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i])) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Enter golf score: ";
		}
	}
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];
	cout << "Average score of total of " << Max << " rounds = " << total / Max << endl;
	return 0;
}