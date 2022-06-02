#pragma warning(disable:4996)
#include <iostream>
//Quiz2
const int cnt = 10;
void input(double *score);
void output(double *score);
double avg(double *score);
int main() {
	double score[cnt];
	input(score);
	output(score);
	return 0;
}
void input(double *score) {
	using namespace std;
	double a;
	for (int i = 0; i < cnt; i++) {
		cout << i+1 << "'s game score: ";
		cin >> a;
		if (a < 0)
			break;
		score[i] = a;
	}
}
void output(double* score) {
	using namespace std;
	double Avg;
	Avg = avg(score);
	cout << "Golf game score: ";
	for (int i = 0; i < cnt && score[i] >= 0; i++) {
		cout << score[i] << " ";
	}
	cout << "\n";
	cout << "Average of Golf score: " << Avg << endl;
}
double avg(double* score) {
	double sum = 0,AVG;
	int count = 0;
	for (int i = 0; i < cnt && score[i] >= 0; i++) {
		sum += score[i];
		count++;
	}
	AVG = sum / count;
	return AVG;
}