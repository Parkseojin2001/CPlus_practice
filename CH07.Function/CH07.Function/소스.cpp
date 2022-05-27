#pragma warning(disable:4996)
#include <iostream>
//arrfun2.cpp
const int ArSize = 8;
int sum_arr(int arr[], int n);
int main() {
	int cookies[ArSize] = {1,2,4,8,16,32,64,128};
	std::cout << cookies << " = array address, ";
	std::cout << "sizeof cookies = " << sizeof cookies << std::endl;
	int sum = sum_arr(cookies, ArSize);
	std::cout << "Total of cookies eaten: " << sum << std::endl;
	sum = sum_arr(cookies, 3);
	std::cout << "Three people ate " << sum << "cookies.\n";
	sum = sum_arr(cookies + 4, 4);
	std::cout << "Four people ate " << sum << "cookies.\n";
	return 0;
}
int sum_arr(int arr[], int n) {
	int total = 0;
	std::cout << arr << " = arr,";
	std::cout << "sizeof arr = " << sizeof arr << std::endl;
	for (int i = 0; i < n; i++) {
		total = total + arr[i];
	}
	return total;
}