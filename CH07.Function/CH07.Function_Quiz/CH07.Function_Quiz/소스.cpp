#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <array>
//Quiz8-a
const int Seasons = 4;
const char* Sname[4] = { "Spring", "Summer","Fall","Winter" };
void fill(struct a *pa);
void show(struct a da);
struct a {
	double ex[Seasons];
};
int main() {
	using namespace std;
	struct a expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}
void fill(struct a *pa) {
	using namespace std;
	for (int i = 0; i < Seasons; i++) {
		cout << "Cost in " << Sname[i] << endl;
		cin >> pa->ex[i];
	}
}
void show(struct a da) {
	using namespace std;
	double total = 0.0;
	cout << "\nSeasonal cost\n";
	for (int i = 0; i < Seasons; i++) {
		cout << Sname[i] << " : $" << da.ex[i] << endl;
		total += da.ex[i];
	}
	cout << "Total cost : $" << total << endl;
}