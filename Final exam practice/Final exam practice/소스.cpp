#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class test {
	int a;
public:
	void gets() {
		cin >> a;
	}
	void operator==(test t2) {
		if (a == t2.a)
			cout << "Objects are equal";
		else
			cout << "Object are not equal";
	}
};
int main() {
	test t1, t2;
	cout << "Enter t1 object a value: ";
	t1.gets();
	cout << "Enter t2 object a vlaue: ";
	t2.gets();
	t1 == t2;
	return 0;
}