/*
              Name: Rayan Checa
        Assignment: Final examination
          Due Date: 12/14/2022
              File: final.cpp
       Description: write a program that:
                    1.declares two two-dimensional integer square arrays a and b. same size
                    2. uses function fill_array to fill array a with random integers in range [0,50]. use function random(seed)
                    3. uses function fill_array to fill the array b with random integers in range [0,50]
                     subject to the condition that at least one element of the arrays a and b, in the same
                      posistions in both arrays,is the same. use a function for this
                    4. print the position in both arrays where the same element is detected
                    5. the size of the arrays should be 4x4.
                    
*/

#include <iostream>
#include <iomanip>
#include <ctime>

const int SIZE = 4;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
void fill_array( int a[ ][ SIZE ] );
void print_array( int a[ ][ SIZE ] );
bool arrays_have_match( int array1[ ][ SIZE ], int array2[ ][ SIZE ] );

using namespace std;

int main( ) 
{
    int a[ SIZE ][ SIZE ]; 
    int b[ SIZE ][ SIZE ];

    fill_array( a );
    do
    {
        fill_array( b );
    }   while( !arrays_have_match( a, b ) );

    cout << endl;
    cout << " First Array: " << endl;
    cout << endl;
    print_array( a );
    cout << endl;

    cout << endl;
    cout << " Second Array: " << endl;
    cout << endl;
    print_array( b );
    cout << endl;

    cout << "Positions of the first equal elements: " << endl;
    for (int row = 0; row < SIZE; row++) 
    {
        for (int col = 0; col < SIZE; col++) 
        {
            if(a[row][col] == b[row][col]) 
            {
                cout << setw( 7 ) << "row = " << row + 1 << endl;
                cout << setw( 7 ) << "col = " << col + 1 << endl;
                cout << setw( 8 ) << a[row][col] << endl;
            }
        }
    }
    
    return 0;
}

void fill_array( int a[ ][ SIZE ] )
{
    for( int row = 0; row < SIZE; ++row )
        for( int col = 0; col < SIZE; ++col )
            a[ row ][ col ] = int( 51*random( seed ) );
}

void print_array( int a[ ][ SIZE ] )
{
    for( int row = 0; row < SIZE; ++row )
    {
        for( int col = 0; col < SIZE; ++col )
            cout << setw( 3 ) << a[ row ][ col ];
        cout << endl;
    }
}

bool arrays_have_match( int array1[ ][ SIZE ], int array2[ ][ SIZE ] )  
{
    for ( int i = 0; i < SIZE; i++ ) 
    {
        for ( int j = 0; j < SIZE; j++ ) 
            if ( array1[ i ][ j ] == array2[ i ][ j ] )
                return true;
    }
    return false;
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
 ./final                   

 First Array: 

 39 15 43  8
 26 27 23 25
 13  3 37 20
  1 28 18 44


 Second Array: 

 25 15 20 23
 48 12 32 14
 36 22 16 18
 25 39 42  7

Positions of the first equal elements: 
 row = 0
 col = 1

*/