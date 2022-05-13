#pragma warning(disable:4996)
#include<iostream>
//ifelseif.cpp
const int Fave = 27;
int main() {
	using namespace std;
	int n;
	cout << "It is a game of guessing a number from 1 to 100.\n";
	cout << "What is my favorite number? ";
	do {
		cin >> n;
		if (n < Fave)
			cout << "It's bigger than that. What is it? ";
		else if (n > Fave)
			cout << "It's smaller than that. What is it? ";
		else
			cout << "Correct. Answer is " << Fave << endl;
	} while (n != Fave);
	return 0;
}