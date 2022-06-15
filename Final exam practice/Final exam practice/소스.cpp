#pragma warning(disable:4996)
#include <iostream>
using namespace std;
template<class t1,class t2>  //The data types of the two classes are different
float big(t1 a, t2 b) { 
	if (a > b)
		return a;
	else
		return b;
}
int main() {
	cout << big(15.5, 13) << endl;
	cout << big(10, 14.5) << endl;
	cout << big(10, 14) << endl;
	return 0;
}