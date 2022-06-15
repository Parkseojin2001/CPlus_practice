#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class A {
	int a, b;
public:
	void get() {
		cin >> a >> b;
	}
	int add() {
		return a + b;
	}
};
class B :public A {
	int c, d;
public:
	void input() {
		cin >> c >> d;
	}
	void sum() {
		cout << c + d + add();
	}
};
int main() {
	B obj;
	obj.get();
	obj.input();
	obj.sum();
	return 0;
}