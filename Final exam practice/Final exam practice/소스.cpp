#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class complex {
private:
	int a;
	int b;
public:
	void setdata(int x, int y) {
		a = x;
		b = y;
	}
	void showdata() {
		cout << "a: " << a << " b: " << b << endl;
	}
	friend complex operator+(complex, complex);
};
complex operator+(complex x, complex y) {
	complex temp;
	temp.a = x.a + y.a;
	temp.b = x.b + y.b;
	return temp;
}
int main() {
	complex obj1, obj2, obj3;
	obj1.setdata(3, 4);
	obj2.setdata(5, 6);
	obj3 = obj1 + obj2;
	obj3.showdata();
	return 0;
}