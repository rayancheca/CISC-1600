/*
              Name: Rayan Checa
        Assignment: hw7
          Due Date: 11/07/2022
       Description: 
              File: hw7.cpp
*/
/*Write a code that declares array a of real numbers,
 populates the array with random values in range [0,1),
  and outputs the two elements of a with the maximum difference between them 
*/

#include<iostream>
#include<iomanip>
#include<ctime>
#include<float.h>

const int SIZE = 5;

using namespace std; 

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );

int main(){

    double a[ SIZE ];
    double minElement = DBL_MAX;
    double maxDiff = 0;

    cout << fixed << showpoint << setprecision( 3 );

    for ( int i = 0; i < SIZE; ++i )
    {
        
        a[ i ] = random( seed );
        //cout << a[ i ] << ' '; Output the array 
        if( ( a[ i ] - minElement ) > maxDiff )
            maxDiff = a[ i ] - minElement;   
        if ( a[ i ] < minElement )
            minElement = a[ i ];
    }
    
    cout << endl;
    cout << setw( 23 ) << " First number: " << setw( 4 ) << minElement << endl;
    cout << setw( 23 ) << " Second number: " << setw( 4 ) << minElement + maxDiff << endl;
    cout << "The max difference is: " << setw( 4 ) << maxDiff << endl;
    cout << endl;

    return 0;
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
./hw7                 

         First number: 0.035
        Second number: 0.858
The max difference is: 0.823

*/
