/*
              Name: Rayan Checa
        Assignment: hw9
          Due Date: 11/17/2022 
              File: hw9.cpp
        Description: Write a program that declares a 2 dimensional
                    array of characters, fill the array with random
                    small letters in such a way that the letters  above the
                    main diagonal are the letters from the upper half of the 
                    alphabet ( above ‘m’), and the letters below the main diagonal 
                    are from the first half of the alphabet( [ a,l ] )
Ex: if array is 4x4, the content of a could be:
			I 	z	p	t		range [ m,z ]
			A	k	x	r		
            I	c	a	q
range[a,l]	B	e	f	z		main diagonal can be any letter
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

const int ROW_SIZE = 4;
const int COL_SIZE = 4;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );

using namespace std; 

int main(){

    char a[ ROW_SIZE ][ COL_SIZE ];

    for( int row = 0; row < ROW_SIZE; ++row )
    {
        for(int col = 0; col < COL_SIZE; ++col)
        {
            if( row < col )
                a[ row ][ col ] = char( int( 'm' + 12*random( seed ) ) );
            if( row > col )
                a[ row ][ col ] = char( int( 'a' + 12*random( seed ) ) );
            if( row == col )
                a[ row ][ col ] = char( int( 'a' + 26*random( seed ) ) );

        }
    }

    cout << endl;

    for( int row = 0; row < ROW_SIZE; ++row )
    {
        for( int col = 0; col < COL_SIZE; ++col ) 
        {
            cout << a[ row ][ col ] << "  ";
        }
        cout << endl;
    }

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
 ./hw9                 

y  v  n  m  
e  k  t  r  
d  c  z  t  
i  g  i  x  

*/