/*
             Grade: 9/10
              Name: Rayan Checa
        Assignment: Quiz2
          Due Date: 11/14/2022
              File: quiz2.cpp
        Description: 
        1. declares an integer array of size 20
        2. uses function fill_array to fill the array with random integers each in range [3,9]
        3. uses function print_pairs that efficiently prints, only once, the pairs of array
        positions for which the sum of the array values is 10 
        4. ex: if array values are 7 5 6 4 6 3 5 
        output : 
            array elements add up to 10 at the following positions:
                first index     sexond index
                    0                  5
                    1                  6
                    2                  3

*/
#include<iostream>
#include<iomanip>
#include <ctime>

const int SIZE = 20;
const int SUM = 10;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
void fill_array( int a[ SIZE ]);
void print_pairs( int a[ SIZE ] );

using namespace std;

int main(){

    int a[ SIZE ]; 

    fill_array( a );

    cout << endl;
    cout << "Array values: ";
    for ( int x = 0; x < SIZE; ++x )
        cout << a[ x ] << " "; 
    cout << endl;
    
    cout << endl;
    cout << setw( 28 ) << "first index" << setw( 20 ) << "second index" << endl;
    cout << setw( 48 )<< "-------------------------------" << endl;
    print_pairs( a );
    cout << endl;

    return 0;
}

void fill_array( int a[ SIZE ] )
{
    for( int i = 0; i < SIZE; ++i )
        a[ i ] = int(3 + 7*random( seed ) ); 
    
}

void print_pairs( int a[ SIZE ] )
{
    int pos1, pos2;
    for ( int i = 0; i < SIZE; i++ )
        for ( int j = i + 1; j < SIZE; j++ ) 
            if ( a[ i ] + a[ j ] == SUM )
            {
                pos1 = i;
                pos2 = j; 
                cout << setw( 23 ) << pos1 <<  setw( 20 ) <<  pos2 << endl;
            }

}

double random( unsigned int &seed) 
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (( MULTIPLIER*seed ) + INCREMENT )%MODULUS;
    
    return double( seed )/MODULUS;
}

/*
 ./quiz2

Array values: 7 9 8 3 4 6 9 7 3 9 8 9 4 3 6 7 4 6 9 4 

                 first index        second index
                 -------------------------------
                      0                   3
                      0                   8
                      0                  13
                      3                   7
                      3                  15
                      4                   5
                      4                  14
                      4                  17
                      5                  12
                      5                  16
                      5                  19
                      7                   8
                      7                  13
                      8                  15
                     12                  14
                     12                  17
                     13                  15
                     14                  16
                     14                  19
                     16                  17
                     17                  19

*/