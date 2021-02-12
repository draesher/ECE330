/* File: main_int.c */
#include "matrix_intver.h"

int main() 
{
  int r, c, i, j;
  int val;
  matrix test, trans;
  std::cout << "How many rows? ";
  std::cin >> r;
  std::cout << "How many columns? ";
  std::cin >> c;
  test = creat_initval(r,c,0);
  std::cout << std::endl << "enter elements of matrix: " << std:: endl;
  for(i = 0; i<r; i++) {
	for(j=0; j<c; j++) {
		std::cout << "Enter element for row [" << i +1 << ']' << " col [" << j +1 << ']' << ": ";
  		std::cin >> val;
  		assign(i,j, &test, val);
	}
  }
  
  std::cout << "\n\t Your Matrix: ";
  matrix_print(test);
  std::cout << "\n Your Transposed Matrix: ");
  trans = transpose(test);
  matrix_print(trans);
  return 0;
}
