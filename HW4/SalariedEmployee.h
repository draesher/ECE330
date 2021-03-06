//HW4
//SalariedEmployee .h file
#ifndef SALARIED_H
#define SALARIED_H

#include <string>
#include "employee.h"
using namespace std;

class SalariedEmployee : public Employee
{
	public:
		SalariedEmployee(long = 0, const string & ="" , const string & ="", const string & = "", int =0, double = 0, double = 1);
		void setBaseSalary(double);
		double getBaseSalary() const;
		double calcSalary() const;
		double getFraction() const;
		void print();
		void setFraction(double);
	private:
		double fraction_worked;
		double baseSalary;
};

#endif
