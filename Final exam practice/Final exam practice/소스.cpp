#pragma warning(disable:4996)
#include <iostream>
using namespace std;
int main() {
	int n, i, sum = 0;
	cout << "Enter array size: ";
	cin >> n;
	int* ptr;
	ptr = new int[n];
	if (ptr == NULL) {
		cout << "Out of Memory";
		return -1;
	}
	cout << "Memory has been created:" << endl;
	cout << "Starting address" << ptr << endl;
	for (i = 0; i < n; i++) {
		cin >> *(ptr + i);
		sum = sum + *(ptr + i);
	}
	cout << "****OUTPUT****" << endl;
	cout << "Elements are:" << endl;
	for (i = 0; i < n; i++) {
		cout << *(ptr + i) << endl;
	}
	cout << "Sum: " << sum << endl;
	delete[]ptr;
	return 0;
}