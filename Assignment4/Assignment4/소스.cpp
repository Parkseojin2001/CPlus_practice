#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;
struct cake {  //declaration structure about "cake information"
	string BrandName;  //string variable declaration
	double diameter = 0.0;  //double variable declaration and initialization
	double weight = 0.0;    //double variable declaration and initialization
};
void input(struct cake*, int n);  //Declaration function to enter cake information
void output(struct cake*, int n);  //Dclaration function to print cake information
int main() {
	int n;
	cin >> n;
	struct cake* menu = new struct cake[n];  //Allocate the memory by using new operator
	input(menu, n);  //Call function to enter cake information
	output(menu, n);  //Call function to print cake information
	delete[]menu; //deallocated the memory using delete operator
	return 0;
}
void input(struct cake* p, int n) { //Define function to enter cake information
	for (int i = 0; i < n; i++) {
		cout << "#" << i + 1 << endl; //print cake's number
		cout << "Brand Name: ";
		cin >> p[i].BrandName;   //Enter cake brand name 
		cout << "Cake diameter: ";
		cin >> p[i].diameter;  //Enter cake diameter
		cout << "Cake weight: ";
		cin >> p[i].weight; //Enter cake weight
	}
}
void output(struct cake* p, int n) { //Define function to print cake information
	for (int i = 0; i < n; i++) {
		cout << "#" << i + 1 << endl; //Print cake's number
		cout << "Brand Name: " << p[i].BrandName << endl; //Print cake brand name
		cout << "Cake diameter: " << p[i].diameter << endl;  //Print cake diameter
		cout << "Cake weight: " << p[i].weight << endl;  //Print cake weight
	}
}