#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class complex {
private:
	int a, b;
public:
	void setdata(int x, int y) {
		a = x;
		b = y;
	}
	void showdata() {
		cout << "a: " << a << " b: " << b << endl;
	}
	complex operator+(complex obj) {
		complex temp;
		temp.a = a + obj.a;
		temp.b = b + obj.b;
		return (temp);
	}
};
int main() {
	complex obj1, obj2, obj3;
	obj1.setdata(3, 4);
	obj2.setdata(5, 6);
	obj3 = obj1 + obj2;
	obj3.showdata();
	return 0;
}