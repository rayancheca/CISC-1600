#include <iostream>
#include <iomanip>
#include <ctime>

const int SIZE = 20;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
void fill_array( int a[ ] );
bool not_found( int a[ ], int r );

using namespace std;

int main(){

    int a[SIZE]; 
    fill_array( a );
    return 0;
}

void fill_array( int a[ ] ) 
{
    for( int i = 0; i < SIZE; ++i )
        a[ i ] = -1;
    int position_to_insert = 0; 
    do
    {
        r = int( 10 + 21*random( seed ) );
        if ( not_found( a, r ) ) 
            a[ position_to_insert ] = r; 
            ++position_to_insert;
    }while( position_to_insert < SIZE );
}

bool not_found( int a[ ], int r )
{
    int i;
    bool found;

    i = 0;
    found  = false;

    while( a[ i ] != -1 && !found )
        //compare a[i] to r 
        if ( a[ i ] == r ) 
            found = true; 
        else
            ++i;
            
    return !found;
}

double random( unsigned int &seed ) 
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (( MULTIPLIER*seed ) + INCREMENT )%MODULUS;
    
    return double( seed )/MODULUS;
}