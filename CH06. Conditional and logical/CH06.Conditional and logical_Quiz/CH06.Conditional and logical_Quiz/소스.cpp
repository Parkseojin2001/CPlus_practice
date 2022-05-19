#pragma warning(disable:4996)
#include<iostream>
#include<array>
int main() {
	using namespace std;
	cout << "Select one of the following options. (If you want to exit, enter q)\n"
		<< "c) camera        p) pianist\n"
		<< "t) tree          g) game\n";
	char ch;
	cin >> ch;
	while (ch != 'q') {
		switch(ch){
		case 'c': cout << "Select camera\n";
			break;
		case 'p': cout << "Select pianist\n";
			break;
		case 't': cout << "Select tree\n";
			break;
		case 'g': cout << "Select game\n";
			break;
		default: cout << "Select one from c, p, t, and g. (If you want to exit, enter q) : ";
			cin >> ch;
			continue;
		}
		break;
	}
	return 0;
}