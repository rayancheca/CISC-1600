/*
              Name: Rayan Checa
        Assignment: lab6
          Due Date: 31/10/2022
       Description: 
              File: lab6.cpp
*/
/*
Write a program that declares an integer array a of size 20, populates
the array with random integers in range [0,20] and outputs the 
maximum value in the array and all positions where the maximum 
value resides in the array
*/

#include<iostream>
#include<iomanip>

const int SIZE = 20;

using namespace std; 

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );

int main(){

    int a[SIZE];
    int max_value = INT_MIN;

    for( int i = 0; i < SIZE; ++i )
    {
        a[ i ] = int( 21*random( seed ) );
        if ( a[ i ] > max_value )
            max_value = a[ i ];
    }

    cout << endl;
    cout << setw( 32 ) << " The maximum value is: " << setw( 4 ) << max_value << endl;
    cout << endl;

    cout << " The max value was in position: ";

    for( int i = 0; i < SIZE; ++i ) 
    {
            if ( a[ i ] == max_value)          
                cout << setw( 4 ) << i;
        
    } 
    
    cout << endl;
    cout << endl;

    return 0;
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
 ./lab6

          The maximum value is:   20

 The max value was in position:    4  11

*/