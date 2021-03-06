/* File: test.cpp */
// File to test the basic employee class

#include<iostream>
#include <string>
#include "./employee.h"
#include "./SalariedEmployee.h"
#include "./HourlyEmployee.h"

using namespace std;

int main() 
{
  Employee
  e1 (001, "Jones", "Booker", "T", 22),
  e2 (002, "Hendrix", "Jimi", "NMI ", 14),
  e3 (003, "Morrison", "Jim", "D", 03);
  
  e1.printEmployee();
  e2.printEmployee();
  
  SalariedEmployee s1 (004, "Freely", "Eye", "P", 16, 8000.00, 1),
  s2 (005, "Door", "Cariss", "A", 15, 6000.00, .5);
  
  s1.print();
  s2.print();
  
  HourlyEmployee h1 (006, "Ricardo", "Ricky", "R", 21, 8.75, 78),
  h2 (007, "Bond", "James", "B", 30, 15.80, 90);
  
  h1.print();
  h2.print();
}
