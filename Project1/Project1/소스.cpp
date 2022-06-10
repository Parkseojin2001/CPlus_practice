#pragma warning(disable:4996)
#include <iostream>
#include <string>
using namespace std;
typedef struct member {
	string name;
	string birth;
	int id;
	string phonenumber;
}member;
void registration(member*,int cnt);
void delete_all(member*,int cnt);
void show_all(member*, int cnt);
void find_specific_customer(member*,int cnt,int n);
void delete_specific_customer(member*,int cnt,int n);
void delete_information(member*, int cnt, int n);
int main() {
	int menu_num,maximum;
	cout << "Maximum number of customer information: ";
	cin >> maximum;
	member *customer_list = new member[maximum];
	cout << "--------Menu--------\n";
	cout << "<1.Registration><2.Delete_All><3.Show_All><4.Find_specific_customer><5.Delete_specific_customer><6.Exit_program>\n";
	int mem_cnt = 0;
	while (1) {
		cout << "Enter the menu number: ";
		cin >> menu_num;
		if (menu_num == 1) {
			registration(customer_list,mem_cnt);
			mem_cnt++;
		}
		else if (menu_num == 2) {
			if (mem_cnt == 0)
				cout << "No customer information\n";
			else {
				delete_all(customer_list, mem_cnt);
				mem_cnt = 0;
			}
		}
		else if (menu_num == 3) {
			if (mem_cnt == 0)
				cout << "No customer information\n";
			else
				show_all(customer_list, mem_cnt);
		}
		else if (menu_num == 4) {
			if (mem_cnt == 0)
				cout << "No customer information\n";
			else {
				int cus_id;
				cout << "Enter customer id: ";
				cin >> cus_id;
				find_specific_customer(customer_list, mem_cnt, cus_id);
			}
		}
		else if (menu_num == 5) {
			if (mem_cnt == 0)
				cout << "No customer information\n";
			else {
				int order_id;
				cout << "Enter customer id: ";
				cin >> order_id;
				delete_specific_customer(customer_list, mem_cnt, order_id);
				mem_cnt--;
			}
		}
		else if (menu_num == 6)
			break;
		else
			cout << "Wrong menu number\n";
	}
	delete[]customer_list;
	return 0;
}
void registration(member *list,int cnt) {
	cout << "Name:";
	cin >> list[cnt].name;
	cout << "Phone number: ";
	cin >> list[cnt].phonenumber;
	cout << "Birth; ";
	cin >> list[cnt].birth;
	list[cnt].id = cnt + 1;
}
void delete_all(member* list,int cnt) {
	for (int i = 0; i < cnt; i++) {
		list[i] = {};
	}
}
void show_all(member* list,int cnt) {
	for (int i = 0; i < cnt; i++) {
		cout << "--------" << i + 1 << "--------\n";
		cout << "Name: " << list[i].name << endl;
		cout << "Phone number: " << list[i].phonenumber << endl;
		cout << "Birth: " << list[i].birth << endl;
		cout << "ID: " << list[i].id << endl;
	}
}
void find_specific_customer(member* list, int cnt, int n) {
	int flag = 0;
	for (int i = 0; i < cnt; i++) {
		if (list[i].id == n) {
			cout << "Name: " << list[i].name << endl;
			cout << "Phone number: " << list[i].phonenumber << endl;
			cout << "Birth: " << list[i].birth << endl;
			cout << "ID: " << list[i].id << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "None of the customers have the same ID as the entered ID.\n";
}
void delete_specific_customer(member* list, int cnt, int n) {
	int flag = 0;
	for (int i = 0; i < cnt; i++) {
		if (list[i].id == n) {
			delete_information(list, cnt, i);
			flag = 1;
		}
	 }
	if(flag==0)
		cout << "None of the customers have the same ID as the entered ID.\n";
}
void delete_information(member* list,int cnt, int n) {
	for (int i = n+1; i < cnt; i++) {
		list[i - 1] = list[i];
	}
}