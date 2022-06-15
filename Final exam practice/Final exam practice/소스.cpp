#pragma warning(disable:4996)
#include <iostream>
using namespace std;
template <class t>
class test {
	t a,b;
public:
	void get() {
		cin >> a >> b;
	}
	t sum() {
		return a + b;
	}
};
int main() {
	test <int> obj1;
	test <float> obj2;
	obj1.get();
	cout << obj1.sum() << endl;
	obj2.get();
	cout << obj2.sum() << endl;
	return 0;
}