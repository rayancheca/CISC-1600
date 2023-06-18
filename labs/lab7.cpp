/*
             Grade: 10/10
              Name: Rayan Checa
        Assignment: lab7
          Due Date: 11/07/2022
              File: lab7.cpp
       Description: write a program that uses structure record which contains fields
       integer rl, and ch in which integers,real numbers and characters respectively 
       can be store. Create an array of 10 structures, fill the array with random values
       and print out the content of the array as follows:
    ingr    rl      ch
     7      3.10     a
     2      0.07     g
     .
     .
     .9     
    random integers should be in range [0,9]
    real numbers in range [0,9.00]
    for charachters use small letter of the alphabet
    real numbers should be printed with two decima digits after the decimal.
 */

#include<iostream>
#include<iomanip>
#include<ctime>

const int SIZE = 10;

struct record
{
    int intgr;
    double rl;
    char ch;
};

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
int rand_int();
double rand_rl();
char rand_ch();
void fill_array( record a[ ] );
void print_array( record a[ ] );

using namespace std;

int main(){

    record a[ SIZE ]; 

    fill_array( a );
    print_array( a) ;

    return 0;
}


void fill_array( record a[ ] )
{
    for( int i = 0; i < SIZE; ++i )
    {
        a[ i ].intgr = rand_int();
        a[ i ].rl = rand_rl();
        a[ i ].ch = rand_ch();
    }
}

void print_array( record a[ ] )
{
    cout << endl;
    cout << setw( 5 ) << "integer" << setw( 9 ) << "real" << setw( 10 ) << "char" << endl;
    cout << fixed << setprecision( 2 );
    for ( int i = 0; i < SIZE; ++i )
        cout << setw( 4 ) << a[i].intgr << setw( 12 ) << a[ i ].rl << setw( 9 ) << a[ i ].ch << endl;
    cout << endl;
}

int rand_int()
{
    return int( 10 * random( seed ) );
}

double rand_rl()
{
    return 9*random( seed );
}

char rand_ch()
{
    return char( int( 'a' + 26*random( seed ) ) );
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
./lab7                  

integer     real      char
   0        7.23        t
   7        2.80        s
   5        7.87        g
   6        8.81        b
   9        0.63        m
   7        4.66        j
   2        1.63        z
   4        3.14        u
   8        7.25        y
   4        3.01        u

*/