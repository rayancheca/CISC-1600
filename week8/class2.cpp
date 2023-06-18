/*write a code to declare and populate array a of integers with
random integers in range [0.10] and outputs the value of that 
integer and its position in the array.*/

#include<iostream>
#include<iomanip>

const int SIZE = 20;

using namespace std; 

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );

int main(){

    int a[SIZE];
    int max_value = INT_MIN, max_position;
    //you could also use int max_value = a[ 0 ];

    for(int i = 0; i < SIZE; ++i)
    {
        a[ i ] = int( 11*random( seed ) );
        if (a[ i ] > max_value )
        {
            max_value = a[ i ];
            max_position = i;
        } 
    }

    cout << " The maximum value is: " << max_value << " and its position in the array is: " << max_position << endl;

}

double random( unsigned int &seed) 
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (( MULTIPLIER*seed ) + INCREMENT )%MODULUS;
    
    return double( seed )/MODULUS;
}