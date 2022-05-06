#pragma warning(disable:4996)
//equal.cpp
#include <iostream>
#include<string>
int main() {
	using namespace std;
	int quizscores[10] = { 20,20,20,20,20,19,20,18,20,20 };
	cout << "Correct method:\n";
	int i;
	for (i = 0; quizscores[i] == 20; i++) {
		cout << i << "Quiz score is 20.\n";
	}
	/*
	cout << "Wrong method:\n";
	for (i = 0; quizscores[i] = 20; i++) {
		cout << "Quis score is 20\n";
	}
	*/
	return 0;
}