/*
             Grade: 10/10
              Name: Rayan Checa
        Assignment: Lab4
          Due Date: 10/17/2022
       Description: Generate random integers from [0,10] and count the numbers printed before the number 9
              File: lab4.cpp
*/

#include <iostream>
#include <iomanip>
#include <ctime>

const int N = 9;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );

using namespace std; 

int main( )
{
    int count = 0, rand;

    cout << endl;
    do
    {
        rand = 11*random( seed );
        cout << setw( 5 ) << rand << endl;
        count +=1;
    }while( rand != N );
    --count;

    cout << endl;
    cout << setw( 5 ) << count << " integers were generated before the number 9" << endl;
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
 ./lab4

    0
    5
    8
    0
    3
    2
    2
    6
   10
    0
    9

   10 integers were generated before the number 9

*/

