#pragma warning(disable:4996)
#include <iostream>
#include <string.h>
//Quiz4
using namespace std;
class sentence2; //declaration class
class sentence1 {  //define class for sentence1
	char st1[100];    //declaration variable
public:
	void read_a() {   //define a function to input a string 1
		cout << "Enter string1: ";   
		cin.getline(st1,100);
	}
	friend void operator>(sentence1, sentence2);
};
class sentence2 {   //define class for sentence2
	char st2[100];   //declaration variable
public:
	void read_b() {   //define a function to input a string 2
		cout << "Enter string2: ";   
		cin.getline(st2,100);
	}
	friend void operator>(sentence1, sentence2);
};
void operator>(sentence1 s1, sentence2 s2) {   //define operator
	strlen(s1.st1) > strlen(s2.st2) ? cout << "Yes" : cout << "No";  //If string1 is greater, print 'Yes'
}
int main() {
	cout << "Is sentence1 > sentence2 ?" << endl;  //Prints a question whether the first sentence is greater than the second sentence
	sentence1 obj1;  //declaration object
	sentence2 obj2;
	obj1.read_a();  //Call function to input string
	obj2.read_b();
	obj1 > obj2;  //Print the result for the question
	return 0;
}