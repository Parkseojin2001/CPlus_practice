#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class test2;
class test1 {
	int a;
public:
	void geta() {
		cout << "Enter obj1 a value->";
		cin >> a;
	}
	friend void operator>(test1, test2);
};
class test2 {
	int b;
public:
	void getb() {
		cout << "Enter obj2 b value->";
		cin >> b;
	}
	friend void operator>(test1, test2);
};
void operator>(test1 x, test2 y) {
	x.a > y.b ? cout << "YES" : cout << "NO";
}
int main() {
	cout << "Is obj1 > obj2" << endl;
	test1 obj1;
	test2 obj2;
	obj1.geta();
	obj2.getb();
	obj1 > obj2;
	return 0;
}