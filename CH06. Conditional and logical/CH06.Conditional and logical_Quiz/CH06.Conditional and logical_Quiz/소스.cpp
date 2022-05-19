#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;
struct info{
	string name;
	double donation;
};
int main() {
	int n;
	cout << "Society for the Preservation of Rightful Influence\n";
	cout << "Number of people to donate: ";
	cin >> n;
	info *list = new info[n];
	for (int i = 0; i < n; i++) {
		cout << i+1 << " Donor Name: ";
		cin >> list[i].name;
		cout << "Donation amount: ";
		cin >> list[i].donation;
	}
	int cnt = 0;
	cout << "\nA list of big donors\n\n";
	for (int i = 0; i < n; i++) {
		if (list[i].donation >= 10000) {
			cout << cnt + 1 << ". " << list[i].name << "      " << list[i].donation << endl;
			cnt++;
		}
	}
	if (cnt == 0)
		cout << "\nWe don't have a donor\n";
	cnt = 0;
	cout << "\nA list small donors\n\n";
	for (int i = 0; i < n; i++) {
		if (list[i].donation < 10000) {
			cout << cnt + 1 << ". " << list[i].name << "      " << list[i].donation << endl;
			cnt++;
		}
	}
	if(cnt==0)
		cout << "\nWe don't have a donor\n";
	return 0;

}
