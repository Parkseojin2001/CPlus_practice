#pragma warning(disable:4996)
#include <iostream>
int main() {
	using namespace std;
	int a, b;
	cin >> a >> b;
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	cout << "Total: "<<sum<<endl;
	return 0;
}