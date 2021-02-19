//HealthInfo.cpp
//ECE330 HW3 main file

#include <iostream>
#include <string>
#include "HeartRates.h"
using namespace std;

int main() {
	string first, last;
	int dobyear, dobmonth, dobday, age, maxheart, targetlow, targethigh;
	cout << "Hello, when prompted please enter the requested information. " << endl;
	cout << "Please enter your First Name:  ";
	cin >> first;
	cout << "\nLast Name:  ";
	cin >> last;
	cout << "\nThe year you were born (YYYY):  ";
	cin >> dobyear;
	cout << "\nThe month you were born:  ";
	cin >> dobmonth;
	cout << "\nFinally, the day you were born:  ";
	cin >> dobday;
	HeartRates customer(last, first, dobday, dobmonth, dobyear);
	age=customer.getAge();
	maxheart = customer.getMaximumHeartRate();
	targetlow = customer.getTargetHeartRate(.50);
	targethigh = customer.getTargetHeartRate(.85);
	cout << "\nYour Info:  " << endl;
	cout << "Name:  " << customer.getFirstName() << " " << customer.getLastName() << endl;
	cout << "DOB:  " << customer.getDOBDay() << '/' << customer.getDOBMonth() << '/' << customer.getDOBYear() << "     Age:  " << age << endl;
	cout << "Maximum Heart Rate for your Age:  " << maxheart << endl;
	cout << "Target Heart Rate Range based on your age:  " << targetlow << "-" << targethigh << endl;
	
	