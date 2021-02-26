//HeartRates.cpp
//Kevin Emig ECE330 HW3

#include <iostream>
#include <string>
#include <iomanip>
#include "HeartRates.h"
using namespace std;

HeartRates::HeartRates(string lastnm, string firstnm, int day, int month, int year) 
	: lastname(lastnm), firstname (firstnm), dob_day (day), dob_month (month), dob_year (year)
	{
		/*setLastName(lastname);
		setFirstName(firstname);
		setDOBDay(dobday);
		setDOBMonth(dobmonth);
		setDOBYear(dobyear);*/
	}

int HeartRates::getAge() {
	int day, month, year;
	cout << "Please enter todays day of the month (1-31): " ;
	cin >> day;
	cout << "\nNow the month you are in today (1-12): ";
	cin >> month;
	cout << "\nFinally, enter the year you are in as of today (YYYY): ";
	cin >> year;
	cout << endl;
	int age = year-dob_year;
	if (month > dob_month) {
		return age;
	}
	else {
		if(month < dob_month) {
			age--;
			return age;
		}
		else {
			if (day < dob_day) {
				age--;
				return age;
			}
			else {
				return age;
			}	
		}
	}
}			

void HeartRates::setDOBDay (int day) {
	dob_day=day;
}

void HeartRates::setDOBMonth(int month) {
	dob_month = month;
}

void HeartRates::setDOBYear(int year) {
	dob_year = year;
}

void HeartRates::setLastName(string lastnm) {
	lastname=lastnm;
}

void HeartRates::setFirstName(string firstnm) {
	firstname=firstnm;
	}

string HeartRates::getFirstName() {
	return firstname;
}

string HeartRates::getLastName() {
	return lastname;
}

int HeartRates::getDOBDay() {
	return dob_day;
}

int HeartRates::getDOBMonth() {
	return dob_month;
}

int HeartRates::getDOBYear() {
	return dob_year;
}

int HeartRates::getMaximumHeartRate(int age) {
	return 220-age;
}

int HeartRates::getTargetHeartRate (double ratio,int age) {
	return floor(getMaximumHeartRate(age)*ratio);
}

