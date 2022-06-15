#pragma warning(disable:4996)
#include <iostream>
using namespace std;
class dma {
public:
	dma() {
		cout << "Constructor called" << endl;
	}
	~dma() {
		cout << "Destructor called" << endl;
	}
};
int main() {
	dma* obj;
	obj = new dma[4];
	delete[]obj;
	return 0;
}