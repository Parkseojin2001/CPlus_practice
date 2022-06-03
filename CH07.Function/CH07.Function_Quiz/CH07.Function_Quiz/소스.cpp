#pragma warning(disable:4996)
#include <iostream>
//Quiz7
const int Max = 5;
double* fill_array(double *a,double *b);
void show_array(double *a, double* b);
void revalue(double r, double* a, double* b);
int main() {
	using namespace std;
	double properties[Max];
	double* b = fill_array(properties, properties + Max);
	show_array(properties, b);
	if (properties != b) {
		cout<<"Enter revaluation rate: ";
		double factor;
		while (!(cin >> factor)) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Wrong, Enter the number: ";
		}
		revalue(factor, properties, b);
		show_array(properties, b);
	}
	return 0;
}
double* fill_array(double* a, double* b) {
	using namespace std;
	int i;
	double temp;
	for (i = 0; i<Max; i++) {
		cout << i+1<<"'s real estate price: $";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; You have completed the input process.\n";
			break;
		}
		else if (temp < 0)
			break;
		*(a + i) = temp;
	}
	return (a + i);
}
void show_array(double* a, double* b) {
	using namespace std;
	for (int i = 0; (a + i) != b; i++) {
		cout << i + 1 << "'s real estate price: $";
		cout << *(a + 1) << endl;
	}
}
void revalue(double r, double* a, double* b) {
	for (int i = 0; (a + i) != b; i++)
		*(a + i) *= r;
}