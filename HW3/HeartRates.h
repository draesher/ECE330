//heartRates.h
//Kevin Emig HW3 - ECE330
#include <iostream>
#include <string>
#include <math.h>
class HeartRates {
	private:
		std::string lastname, firstname;
		int dob_day, dob_month, dob_year, age;
	public:
		explicit HeartRates(std::string, std::string, int, int, int);
		void setLastName(std::string);
		void setFirstName(std::string);
		void setDOBDay(int);
		void setDOBMonth(int);
		void setDOBYear(int);
		int getDOBDay();
		int getDOBMonth();
		int getDOBYear();
		std::string getLastName();
		std::string getFirstName();
		int getAge();
		int getMaximumHeartRate(int);
		int getTargetHeartRate(double, int);
};
