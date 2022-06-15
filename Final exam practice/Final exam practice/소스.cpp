#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class sample {
	int a, b;
	friend void display(sample);
public:
	sample() {
		a = 0;
		b = 0;
	}
};
void display(sample s) {
	s.a = 10;
	s.b = 20;
	cout << "a = " << s.a << endl;
	cout << "b = " << s.b << endl;
}
int main() {
	sample s;
	display(s);
	return 0;
}