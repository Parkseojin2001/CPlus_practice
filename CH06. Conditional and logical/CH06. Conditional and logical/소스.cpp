#pragma warning(disable:4996)
#include<iostream>
//and.cpp
const int ArSize = 6;
int main() {
	using namespace std;
	float naaq[ArSize];
	cout << "Enter your colleagues'New Age Aareness Quotients.\n"
		<< ArSize << "If you entered all data or a negative number\n"
		<< "escape while loop.\n";
	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < ArSize && temp >= 0) {
		naaq[i] = temp;
		++i;
		if (i < ArSize) {
			cout << "Next value: ";
			cin >> temp;
		}
	}
	if (i == 0)
		cout << "There is no data entered, so the program is terminated\n";
	else {
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << "Among colleagues " << count;
		cout << " people is better than your NAAQ.\n";
	}
	return 0;
}