#include <iostream>
#include "./HourlyEmployee.h"
using namespace std;

HourlyEmployee::HourlyEmployee(long id, const string &last, const string &first, const string &initial,
		   int dept, double hourly, double hours)
		   : Employee( id, last, first, initial, dept)
{
	setHourlyRate(hourly);
	setHoursWorked(hours);
}

void HourlyEmployee::setHourlyRate( double hourly)
{
	if (hourly >= 0.0)
		hourly_rate = hourly;
	else
		throw invalid_argument("Hourly rate must be >= 0.0");
}

double HourlyEmployee::getHourlyRate() const
{
	return hourly_rate;
}

void HourlyEmployee::setHoursWorked(double hours)
{
	total_hours = hours;
	if (total_hours > 80)
	{
		overtime = total_hours - 80;
		regular_hours = 80;
	}
	else
	{
		overtime = 0;
		regular_hours = total_hours;
	}
		
}

double HourlyEmployee::getHoursWorked() const
{
	return total_hours;
}

double HourlyEmployee::getOvertime() const
{
	return overtime;
}

double HourlyEmployee::calcPay() const
{
		return getHourlyRate() * getHoursWorked() + 1.5 * getHourlyRate() * getOvertime();
}


void HourlyEmployee::print()
{
	cout << "\nHourly Employee: " << endl;
	Employee::printEmployee();
	cout << "Hourly Rate:  " << getHourlyRate() << endl;
	cout << "Total Hours Worked:  " << getHoursWorked() 
	<< "     Overtime:  " << getOvertime() << endl;
	cout << "Calculated Pay (including overtime):  $" << calcPay() << endl;
}
