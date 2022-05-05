#pragma warning(disable:4996)
#include <iostream>
#include<array>
//Quiz 10
int main() {
	using namespace std;
	array<double, 3> record;
	cout << "#1 : ";
	cin >> record[0];
	cout << "#2 : ";
	cin >> record[1];
	cout << "#3 : ";
	cin >> record[2];
	cout << "Avg: " << (record[0] + record[1] + record[2]) / 3 << endl;
	return 0;
}
