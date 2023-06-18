/*
             Grade: 9/10
              Name: Rayan Checa
        Assignment: lab9
          Due Date: 11/21/2022 
              File: lab9.cpp
       Description: Design a function fill_array( a ) 
                    which fills the array a with distinct 
                    random integers in range [ 0, 30 ]. Array of size 20 
*/

#include <iostream>
#include <iomanip>
#include <ctime>

const int SIZE = 20;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
void fill_array( int a[ ] );
bool not_found( int a[ ], int r );
void print_array( int a[ ] );

using namespace std;

int main()
{

    int a[ SIZE ]; 

    fill_array( a );

    cout << endl;
    cout << setw( 30 ) << "Array of distinct random values: " << endl;
    cout << endl;

    print_array( a );  
    cout << endl;

    return 0;
}

void fill_array( int a[ ] ) 
{
    for( int i = 0; i < SIZE; ++i )
        a[ i ] = -1;

    int position_to_insert = 0; 

    do
    {
        int r = int( 10 + 21*random( seed ) );
        if ( not_found( a, r ) ) 
        {
            a[ position_to_insert ] = r; 
            ++position_to_insert;
        }
    }   while( position_to_insert < SIZE );

}

bool not_found( int a[ ], int r )
{
    int i;
    bool found;

    i = 0;
    found  = false;

    while( a[ i ] != -1 && !found )
    {
        if ( a[ i ] == r ) 
            found = true; 
        else
            ++i;
    }

    return !found;
}

void print_array( int a[ ] )
{
    for( int i = 0; i < SIZE; ++i )
        cout << setw( 5 ) << a[ i ] << " ";
    cout << endl;
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
 ./lab9

Array of distinct random values: 

   17    24    26    29    15    25    22    12    21    19    16    14    18    13    23    30    28    27    10    20 

*/