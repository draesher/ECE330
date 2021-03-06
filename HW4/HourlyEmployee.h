//HW4
//HourlyEmployee .h file
#ifndef HOURLY_H
#define HOURLY_H

#include <string>
#include "employee.h"
using namespace std;

class HourlyEmployee : public Employee
{
	public:
		HourlyEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, double = 0, double = 0);
		void setHourlyRate(double);
		double getHourlyRate() const;
		void setHoursWorked(double);
		double getHoursWorked() const;
		double getOvertime() const;
		double calcPay() const;
		void print();
	private:
		double regular_hours;
		double hourly_rate;
		double overtime;
		double total_hours;
};

#endif
