/*
             Grade: 19/20
              Name: Rayan Checa
        Assignment: hw8
          Due Date: 11/10/2022
       Description: Write a c++ program thart generates 20 random points within 
                    the unit square and outputs the coordinates of two points generated 
                    with the largest distance between them 
              File: hw8.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

const int SIZE = 20;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
double maxDistance( double x[ SIZE ], double y[ SIZE ], int &pos1, int &pos2 );

using namespace std; 

int main()
{

    double x[ SIZE ], y[ SIZE ];
    int pos1, pos2; 

    for ( int i = 0; i < SIZE;++i )
    {
        x[ i ] = random( seed );
        y[ i ] = random( seed );
    } 

    cout << fixed << showpoint << setprecision( 3 ); 
    cout << endl;
    cout << "The max distance is: "<< maxDistance( x,y,pos1,pos2 ) << endl;
    cout << endl;
    cout <<setw( 20 ) << left << "x - coordinates" << setw( 35 ) << "y - coordinates " << endl;
    cout << setw( 23 ) << x[ pos1 ] <<  setw( 38 ) << y[ pos1 ] << endl;
    cout << setw( 23 ) << x[ pos2 ] << setw( 38 ) << y[ pos2 ]; 
    cout << endl;

    return 0;
}

double maxDistance( double x[ SIZE ], double y[ SIZE ], int &pos1, int &pos2 )
{
    double distance = 0, maxDist = 0;

    for( int j = 0; j < SIZE; ++j )
    {
        for(int i = 0; i < SIZE; ++i)
        {
            distance = sqrt( pow( x[ j ] - x[ i ], 2 ) + pow( y[ j ] - y[ i ], 2 ) );
            if( distance > maxDist )
            {
                maxDist = distance;
                pos1 = j;
                pos2 = i; 
            }
        }
    }
    return maxDist;
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
./hw8

The max distance is: 0.957

x - coordinates     y - coordinates                    
0.036                  0.184                                 
0.817                  0.739                             

*/