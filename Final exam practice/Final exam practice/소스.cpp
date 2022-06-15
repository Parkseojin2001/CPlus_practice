#pragma warning(disable:4996)
#include <iostream>
using namespace std;
void display(int);
void display(float);
void display(int, float);
int main() {
	int a = 10;
	float b = 20.5;
	display(a);
	display(b);
	display(a, b);
	return 0;
}
void display(int x) {
	cout << "Integer number: " << x << endl;
}
void display(float y) {
	cout << "Float number: " << y << endl;
}
void display(int a, float b) {
	cout << "Integer number: " << a << endl;
	cout << "float number: " << b << endl;
}