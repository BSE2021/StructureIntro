// StructureIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>
using namespace std;

//structure is a complex type of data where a group of different data types 
// can be called with one name

//define the structure
struct Students {
	int age;	
	float fees;
	string name;
	string phone;
	string address;
};

void output_data(struct Students bse_student[5], int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << "\nThe name of student" << i + 1 << " : " << bse_student[i].name;
		cout << "\nThe fees of student" << i + 1 << " : " << bse_student[i].fees;

	}
}
void input_data() {
	struct Students bse[5];
	int i;
	for (i = 0; i < 5; i++) {
		cout << "\nEnter the name of student" << i + 1 << " : ";
		cin >> bse[i].name;
		cout << "\nEnter the fees of student" << i + 1 << " : ";
		cin >> bse[i].fees;
	}
	output_data(bse, 5);
}

int main()
{
	//struct Students bse[5];
	//int i;

	/*bse.name = "Pinky";
	bse.age = 20;
	bse.phone = "0203456538";
	bse.fees = 9950;
	bse.address = "45 Britania Street, Newlands";*/


	//input
	input_data();

	

	
	
}

