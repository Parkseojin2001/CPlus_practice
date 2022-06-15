#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class A {
protected:
	int no;
public:
	void getno() {
		cout << "Enter No: ";
		cin >> no;
	}
};
class B :public A {
public:
	void square() {
		int sq;
		sq = no * no;
		cout << "square of the number: ";
		cout << sq << endl;
	}
};
class C :public A {
public:
	void cube() {
		int cube;
		cube = no * no * no;
		cout << "Cude of number is: " << cube << endl;
	}
};
int main() {
	B bobj;
	C cobj;
	bobj.getno();
	bobj.square();
	cobj. getno();
	cobj.cube();
	return 0;
}