#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
#include <string>
//Quiz 5
using namespace std;
struct CandyBar {
	string BrandName;
	double weight;
	int cal;
};
int main() {
	CandyBar snack = {
		"Mocha Munch",
		2.3,
		350
	};
	cout << snack.BrandName << endl
		<< snack.weight << endl
		<< snack.cal;
	return 0;
}