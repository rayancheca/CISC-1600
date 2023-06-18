/*
             Grade: 20/20
              Name: Rayan Checa
        Assignment: hw11
          Due Date: 12/01/2022 
              File: hw11.cpp
        Description: Write a function partition( arguments ) that takes an integer array,
                    two positions of elements in the array called first and last, and the value called pivot,
                    which should be an integer within the range of values used in the array.
                    Function to populate array with random integers  in range [10,50] and the size of
                    the array should be 20. All elements should be different.
                    Function partition( )  should partition the array values in such a way that the array values 
                    strictly smaller than the pivot are on the left side and the array values greater than or equal 
                    to the pivot value are on the right
                    Make a print_array( ) function to print array after fill_array( ) and after partition( )
*/

#include <iostream>
#include <iomanip>
#include <ctime>

const int SIZE = 20;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
void fill_array( int a[ ] );
int find_pivot( int a[ ] );
void partition( int a[ ], int first, int last, int pivot );
void print_array( int a[ ] );


using namespace std;

int main()
{

    int a[ SIZE ];

    fill_array( a );

    cout << endl;
    cout << " - unsorted array:  ";

    print_array( a );
    cout << endl;
    
    partition( a, 0, SIZE - 1, find_pivot( a ) );

    cout << endl;
    cout << setw( 20 ) << " - sorted array:  ";

    print_array( a ); 
    cout << endl;

    return 0;
}

void fill_array( int a[ ] )
{
    for( int i = 0; i < SIZE;++i )
        a[ i ] = int( 10 + 41*random( seed ) );
}

void print_array( int a[ ] )
{
    for( int i = 0; i < SIZE; ++i )
        cout << setw( 5 ) << a[ i ] << " ";
    cout << endl;
}

int find_pivot( int a[ ] )
{   
    int pivot;
    pivot = a[ int( SIZE * random( seed ) ) ];
    
    cout << setw( 19 ) << "pivot is: " << setw( 6 ) << pivot << endl;

    return pivot;
}

void partition( int a[ ], int first, int last, int pivot )
{

    int i = first;
    int j = last; 

    while( i < j )
    {
        while( a[ i ] < pivot )
            ++i;
        while( a[ j ] >= pivot )
            --j;
        if( i < j ) 
        {
            swap( a[ i ], a[ j ] );
            ++i;
            --j;
        }
    }
}


double random( unsigned int &seed ) 
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (( MULTIPLIER*seed ) + INCREMENT )%MODULUS;
    
    return double( seed )/MODULUS;
}

/*
 ./hw11                  

 - unsorted array:     36    13    17    26    30    30    10    19    44    36    28    21    26    23    25    23    28    13    31    36 

         pivot is:     28

   - sorted array:     13    13    17    26    23    25    10    19    23    26    21    28    36    44    30    30    28    36    31    36 

*/
