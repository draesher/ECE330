//heartRates.h
//Kevin Emig HW3 - ECE330
#include <iostream>
#include <string>

class HeartRates {
	private:
		std::string lastname, firstname;
		std::int dob_day, dob_month, dob_year, age;
	public:
		explicit HeartRates(std::string, std::string, std::int, std::int, std::int);
		void setLastName(string);
		void setFirstName(string);
		void setDOBDay(int);
		void setDOBMonth(int);
		void setDOBYear(int);
		std::int getDOBDay();
		std::int getDOBMonth();
		std::int getDOBYear();
		std::string getLastName();
		std::string getFirstName();
		std::int getAge();
		std::int getMaximumHeartRate();
		std::int getTargetHeartRate(int);
};
