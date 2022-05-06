#pragma warning(disable:4996)
//waiting.cpp
#include <iostream>
#include <ctime>
int main() {
	using namespace std;
	cout << "Enter the delay time in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "Start counting.\a\n";
	clock_t start = clock();
	while (clock() - start < delay);
	cout << "End\a\n";
	return 0;
}