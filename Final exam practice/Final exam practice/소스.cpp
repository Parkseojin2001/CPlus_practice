#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class test1 {
	int a, b;
public:
	friend class test2;
	void getab() {
		cin >> a >> b;
	}
};
class test2 {
public:
	void putab(test1 t1) {
		cout << t1.a << t1.b << endl;
	}
};
int main() {
	test1 t1;
	test2 t2;
	t1.getab();
	t2.putab(t1);
	return 0;
}