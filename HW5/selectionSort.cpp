// Fig. 8.13: selectionSort.cpp
// Selection sort with pass-by-reference. This program puts values into an 
// array, sorts them into ascending order and prints the resulting array.
#include <iostream> 
#include <iomanip>
using namespace std;

template <class U>
// swap values at memory locations to which
// element1Ptr and element2Ptr point
U swap( U * const element1Ptr, U * const element2Ptr )
{
   U hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // end function swap
template <class T>
// function to sort an array
T selectionSort( T * const array, const T size )
{
   int smallest; // index of smallest element

   // loop over size - 1 elements
   for ( int i = 0; i < size - 1; ++i )
   {
      smallest = i; // first index of remaining array

      // loop to find index of smallest element
      for ( int index = i + 1; index < size; ++index )

         if ( array[ index ] < array[ smallest ] )
            smallest = index;

      swap( &array[ i ], &array[ smallest ] );
   } // end if
} // end function selectionSort


int main()
{
   const int arraySize = 10;
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	float b[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   cout << "Int data items in original order\n";

   for ( int i = 0; i < arraySize; ++i )
      cout << setw( 4 ) << a[ i ];
    cout << endl;
	cout << "Float data items in original order\n";

  for ( int k = 0; k < arraySize; ++k )
      cout << setw( 4 ) << b[ k ];
  
   selectionSort<int>( a, arraySize ); // sort the array
	selectionSort<float>(b, arraySize);
	
   cout << "\nInt Data items in ascending order\n";
   for ( int j = 0; j < arraySize; ++j )
      cout << setw( 4 ) << a[ j ];
  
	cout << "\nFloat Data items in ascending order\n";
   for ( int m = 0; m < arraySize; ++m )
      cout << setw( 4 ) << b[ m ];

   cout << endl;
} // end main
