#pragma warning(disable:4996)
#include<iostream>
#include<array>
int main() {
	using namespace std;
	double sum = 0;
	array<double, 10>donation;
	for (int i = 0; i < 10; i++) {
		cout << "Enter donation #" << i+1 << endl;
		if (!(cin >> donation[i]))
			exit(EXIT_FAILURE);
		sum += donation[i];
	}
	double avg = sum / 10;
	int count = 0;
	for (int i = 0; i < 10; i++) {
		if (avg < donation[i])
			count++;
	}
	cout << "Average donation: " << avg << endl;
	cout << "Number of donation greater than average: " << count << endl;
	return 0;
}