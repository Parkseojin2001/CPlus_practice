#pragma warning(disable:4996)
#include <iostream>
//Quiz3
struct box {
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};
void Print(struct box);
float Volume(struct box *);
int main() {
	using namespace std;
	struct box a = {
		"abc",10,20,3,600
	};
	Print(a);
	cout << "Height: ";
	cin >> a.height;
	cout << "Width: ";
	cin >> a.width;
	cout << "Length: ";
	cin >> a.length;
	cout << "Volume: ";
	a.volume = Volume(&a);
	Print(a);
	return 0;
}
void Print(struct box Box) {
	using namespace std;
	cout << "Height: " << Box.height << endl;
	cout << "Width: " << Box.width << endl;
	cout << "Length: " << Box.length << endl;
	cout << "Volume: " << Box.volume << endl;
}
float Volume(struct box* Box) {
	return Box->height * Box->length * Box->width;
}
