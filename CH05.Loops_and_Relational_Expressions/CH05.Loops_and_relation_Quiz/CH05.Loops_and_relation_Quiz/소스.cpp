#pragma warning(disable:4996)
#include <iostream>
#include <string>
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
	int sell[12],sum=0;
	for (int i = 0; i < 12; i++) {
		cout << month[i]<<": ";
		cin >> sell[i];
		sum += sell[i];
	}
	
	cout << "Total annual sales: " << sum << endl;
	return 0;
}