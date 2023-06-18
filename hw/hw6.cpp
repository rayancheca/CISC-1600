
/*
             Grade: 19/20
              Name: Rayan Checa
        Assignment: HW6
          Due Date: 11/03/2022
       Description: Write a single for loop that prints the elemtns of the character array of size 100 as a matrix 10*10
              File: hw6.cpp
*/

#include <iostream>
#include <iomanip>

const int SIZE = 100;

using namespace std; 

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );

int main(){

    char a[ SIZE ];

    for( int i = 0; i < SIZE; ++i )
        a[ i ] = char( int( 'a' + 26*random( seed ) ) );

    cout << endl;

    for( int i = 0; i < SIZE; ++i )
    {   
        cout << a[ i ] << " ";
        if ( ( i + 1) % 10 == 0 ) 
            cout << endl;
    }

    cout << endl;

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
./hw6                 

m k p t f x v t i x 
x p c u y y m r l q 
y m c t w f e y n y 
l x l x l r i c b g 
x n c t x z g n w j 
d i j x c b k h c n 
i e j c b k l l h y 
d t t u v r o y x f 
q e e n c e h z j w 
p y i q k i c p d a 

*/
