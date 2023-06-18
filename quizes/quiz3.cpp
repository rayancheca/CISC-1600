/*
             Grade: 9/10
              Name: Rayan Checa
        Assignment: quiz3
          Due Date: 11/28/2022
              File: quiz3.cpp
        Description: Write a program that
                    1. Declares a 5 element character array
                    2. fills the array woith random small letters of the aplhabet
                    3. prints the contents of the array
                    4. has a boolean function is_palindrome that accepts a 5 element 
                       character array as an argument and returns true if the characters 
                       in the array read the same forwards and backwards
                    5. uses function is_palindrome to print the appropriate message

       
*/

#include <iostream>
#include <iomanip>
#include <ctime>

const int SIZE = 5;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
void print_array( char a[ ] );
void fill_array( char a[ ] );
bool is_palindrome( char a[ ]);

using namespace std;

int main()
{

    char a[ SIZE ];

    fill_array( a );

    cout << endl;
    print_array( a );
    cout << endl;

    if( is_palindrome( a ) )
    {
		cout << setw( 45 ) << "The elements of the array form a palindrome " << endl;
        cout << endl;
    }
    else
    {
		cout << setw( 55 ) << "The elements of the array do not form a palindrome " << endl;
        cout << endl;
    }

}

bool is_palindrome( char a[ ] )
{

    int i=0, flag = 0;

	while( flag == 0 && i < SIZE )
    {
		if( a[ i ] == a[ SIZE - i - 1 ] )
        {
			flag = 0;
			++i;
		}
		else
			flag = 1;
	}

	if( flag == 0 )
		return true;
	else
		return false;
} 

void fill_array( char a[ ] )
{
    for( int i = 0; i < SIZE; ++i )
        a[ i ] = char( int( 'a' + 26*random( seed ) ) ); 
}

void print_array( char a[ ] )
{
    for( int i = 0; i < SIZE; ++i )
        cout << setw( 5 ) << a[ i ];
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
./quiz3                   

    k    w    r    t    d

    The elements of the array do not form a palindrome 

*/
