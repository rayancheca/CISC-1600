/*write a program that generates 10 random points 
within the unit square and stores the coordinates of
these points in the array */

#include<iostream>
#include<iomanip>
#include<ctime>

const int SIZE = 10;

using namespace std; 

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );

//void print_points( double x[], double y[]);

int main(){
    double x[ SIZE ], y[ SIZE ];
    for ( int i = 0; i < SIZE;++i )
    {
        x[ i ] = random( seed );
        y[ i ] = random( seed );
    } 

    cout << "point  x - coordinate      y - coordinate" << endl;;
    cout << fixed << setprecision( 2 );
    for ( int i = 0; i < SIZE; ++i )
        cout << setw( 5 ) << i+1 << setw( 12 ) << x[ i ] << setw( 19 ) << y[ i ] << endl;
    //print_points(x[],y[]);

    
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
./class1
point  x - coordinate      y - coordinate
    1        1.00               0.89
    2        0.49               0.66
    3        0.38               0.89
    4        0.87               0.91
    5        0.78               0.29
    6        0.19               0.82
    7        0.26               0.93
    8        0.91               0.54
    9        0.35               0.70
   10        0.38               0.62
void print_points( double x[], double y[])
{
    cout << "point  x - coordinate      y - coordinate";
    cout << fixed << setprecision( 2 );
    for ( int i = 0; i < SIZE; ++i )
        cout << setw( 10 ) << i << setw( 10 ) << x[ i ] << setw( 10 ) << y[ i ] << endl;

}*/