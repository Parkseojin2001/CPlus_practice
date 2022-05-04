/*use_new.cpp
#include <iostream>
int main() {
	using namespace std;
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;
	cout << "night value = ";
	cout << nights << ": memory location " << &nights << endl;
	cout << "int type ";
	cout << "value = " << *pt << ": memory location = " << pt << endl;
	double* pd = new double;
	*pd = 1000001.0;
	cout << "double type";
	cout << "value = " << *pd << ":memory location = " << pd << endl;
	cout << "pt size = " << sizeof(*pt) << endl;
	cout << "pd size = " << sizeof pd;
	cout << ": *pd size = " << sizeof(*pd) << endl;
	return 0;
}*/
/*arraynew.cpp
#include <iostream>
int main() {
	using namespace std;
	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 + 1;
	cout << "Now, p3[0] is " << p3[0] << endl;
	p3 = p3 - 1;
	delete[]p3;
	return 0;
}*/
/*addpntrs.cpp
#include <iostream>
int main() {
	using namespace std;
	double wages[3] = { 100.0,200.0,3000.0 };
	short stacks[3] = { 3,2,1 };
	double* pw = wages;
	short* ps = &stacks[0];
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "pw pointer plus 1:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
	ps = ps + 1;
	cout << "ps pointer plus 1:\n";
	cout << "ps = " << ps << ", *ps =" << *ps << "\n\n";

	cout << "Access as an array\n";
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	cout << "access as a pointer\n";
	cout << "*stacks = " << *stacks << ", *(stacks+1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = wages array size\n";
	cout << sizeof(pw) << " = pw pointer size\n";
	return 0;
}*/
//ptrstr.cpp
#include <iostream>
#include <cstring>
int main() {
	using namespace std;
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;
	cout << animal << " and ";
	cout << bird << "\n";
	cout << "Input animal type: ";
	cin >> animal;
	ps = animal;
	cout << ps << "s!\n";
	cout << "strcpy() before:\n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)ps << ": " << ps << endl;
	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "strcpy() after:\n";
	cout << (int*)animal << ": " << animal << endl;
	cout << (int*)animal << ": " << ps << endl;
	delete[]ps;
	return 0;
}