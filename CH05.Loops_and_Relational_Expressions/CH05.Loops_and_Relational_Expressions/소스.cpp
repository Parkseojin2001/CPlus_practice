#pragma warning(disable:4996)
//nested.cpp
#include <iostream>
#include <string>
const int Cities = 5;
const int Years = 4;
int main() {
	using namespace std;
	const string cities[Cities] = {
		"Seoul",
		"Jeju",
		"Busan",
		"Gangneung",
		"Daegu"
	};
	int maxtemps[Years][Cities] = {
		{35,32,33,36,35},
		{33,32,34,35,31},
		{33,34,32,35,34},
		{36,35,34,37,35}
	};
	cout << "2009~2012 highest temperature of the year\n\n";
	for (int city = 0; city < Cities; ++city) {
		cout << cities[city] << ":   \t";
		for (int year = 0; year < Years; ++year) {
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}
	return 0;
}