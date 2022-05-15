#pragma warning(disable:4996)
#include<iostream>
//cinfish.cpp
const int Max = 5;
int main() {
	using namespace std;
	double fish[Max];
	cout << "Enter the weight of the fish you caught today.\n";
	cout << "You can catch up to " << Max << "fish.\n"
		<< "<If you end the input, press P.>\n";
	cout << "fish #1: ";
	int i = 0;
	while (i < Max && cin >> fish[i]) {
		if (++i < Max)
			cout << "fish #" << i + 1 << ": ";
	}
	double total = 0.0;
	for (int j = 0; j < i; j++)
		total += fish[j];
	if (i == 0)
		cout << "You haven't caught a single fish.\n";
	else
		cout << "Fish " << i << "average weight of the mare is " << total / i << "gram.\n";
	cout << "Exit program.\n";
	return 0;
}