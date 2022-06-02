#pragma warning(disable:4996)
#include <iostream>
//Quiz6
int Fill_array(double*, int);
void Show_array(double*, int);
void Reverse_array(double*, int);
int main() {
	using namespace std;
	double ar[10];
	int n = Fill_array(ar, 10);
	Show_array(ar, n);
	cout << "REVERSE" << endl;
	Reverse_array(ar, n);
	Show_array(ar, n);
}
int Fill_array(double* arr, int n) {
	using namespace std;
	int i;
	for (i = 0; i < n; i++) {
		cout << i + 1 << "'s double value: ";
		if (!(cin >> arr[i]))
			break;
	}
	return i;
}
void Show_array(double* ar, int n) {
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << i + 1 << " : " << ar[i] << endl;
}
void Reverse_array(double* ar, int n) {
	for (int i = 0; i < n / 2; i++) {
		int temp;
		temp = ar[i];
		ar[i] = ar[n - 1 - i];
		ar[n - 1 - i] = temp;
	}
}