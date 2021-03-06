#include <iostream>
#include "./SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(long id, const string &last, const string &first, const string &initial,
		   int dept, double salary, double fraction)
		   : Employee( id, last, first, initial, dept)
{
	setBaseSalary(salary);
	setFraction(fraction);
}

void SalariedEmployee::setBaseSalary( double salary)
{
	if (salary >= 0.0)
		baseSalary = salary;
	else
		throw invalid_argument("salary must be >= 0.0");
}

double SalariedEmployee::getBaseSalary() const
{
	return baseSalary;
}

double SalariedEmployee::calcSalary() const
{
	return baseSalary * getFraction();
}

void SalariedEmployee::setFraction( double fraction)
{
	fraction_worked = fraction;
}

double SalariedEmployee::getFraction() const
{
	return fraction_worked;
}


void SalariedEmployee::print()
{
	cout << "\nSalaried Employee: " << endl;
	Employee::printEmployee();
	cout << "Base Salary:  $" << getBaseSalary() << endl;
	cout << "Actual Salary:  $" << calcSalary() << endl;
}
