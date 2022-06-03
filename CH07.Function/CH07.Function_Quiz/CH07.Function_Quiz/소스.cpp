#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <array>
//Quiz8
const int Seasons = 4;
const char* Sname[4] = { "Spring", "Summer","Fall","Winter" };
void fill(std::array<double, Seasons>* pa);
void show(std::array<double, Seasons> da);
int main() {
	using namespace std;
	array<double, Seasons>expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}
void fill(std::array<double, Seasons>* pa) {
	using namespace std;
	for (int i = 0; i < Seasons; i++) {
		cout << "Cost in " << Sname[i] << endl;
		cin >> (*pa)[i];
	}
}
void show(std::array<double, Seasons> da) {
	using namespace std;
	double total = 0.0;
	cout << "\nSeasonal cost\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << " : $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total cost : $" << total << endl;
}