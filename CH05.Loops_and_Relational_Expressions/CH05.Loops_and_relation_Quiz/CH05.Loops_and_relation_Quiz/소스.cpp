#pragma warning(disable:4996)
#include <iostream>
int main() {
	using namespace std;
	string month[12] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int sell[3][12], sum[3] = { 0 }, total = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 12; j++) {
			cout << month[j] << ": ";
			cin >> sell[i][j];
			sum[i] += sell[i][j];
		}
		total += sum[i];
	}
	for (int i = 0; i < 3; i++) {
		cout <<i+1 << "year sales: " << sum[i] << endl;
	}
	cout << "Total sales: " << total;
	return 0;
}