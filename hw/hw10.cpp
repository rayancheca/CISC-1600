/*
             Grade: 20/20
              Name: Rayan Checa
        Assignment: hw10
          Due Date: 11/17/2022 
              File: hw10.cpp
        Description:   Write a program that:
Declares two 2dimensional arrays a and b, both of sizes [SIZE,SIZE] size=6.
Populates both arrays with small positive integers in range [0,5]. This task should be implemented by using a function fill_array which will be used twice. To fill array a and fill array b separately. 
Design a function print_array which should be used twice to print each array a and b separately
Design a function multiply(a,b) which return the result of the multiplication of a*b.This result should be recorded in array c, which should also be declared in your program
Print the content of array c using function print_array designed previously.
*/

#include <iostream>
#include <iomanip>
#include <ctime>

const int SIZE = 6;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
void fill_array( int arr[ ][ SIZE ] );
void print_array( int arr[ ][ SIZE ] );
void multiply_a_b( int a[ ][ SIZE ], int b[ ][ SIZE ], int c[ ][ SIZE ] );

using namespace std;

int main()
{
    int a[ SIZE ][ SIZE ];
    int b[ SIZE ][ SIZE ];
    int c[ SIZE ][ SIZE ];

    fill_array( a );
    fill_array( b );
    multiply_a_b( a, b, c );

    cout << endl;
    cout << setw( 28 ) << " -Matrix A- " << endl;
    cout << endl;

    print_array( a );

    cout << endl;
    cout << setw( 28 ) << " -Matrix B- " << endl;
    cout << endl;

    print_array( b );

    cout << endl;
    cout << setw( 28 ) << " -Matrix C- " << endl;
    cout << endl;

    print_array( c );
    cout << endl;

    return 0;
}


void fill_array( int arr[ ][ SIZE ] )
{
    for( int row = 0; row < SIZE; ++row )
    {
        for( int col = 0; col < SIZE; ++col ) 
        {
            arr[ row ][ col ] = int( 6*random( seed ) );
        }
    }
}

void print_array( int arr[ ][ SIZE ] )
{   
    for( int row = 0; row < SIZE; ++row )
    {
        for( int col = 0; col < SIZE; ++col ) 
        {
            cout <<  setw( 5 ) << arr[ row ][ col ] << "  ";
        }
        cout << endl;
    }
}

void multiply_a_b( int a[ ][ SIZE ], int b[ ][ SIZE ], int c[ ][ SIZE ] )
{
    for ( int i = 0; i < SIZE; i++ )
    {
        for ( int j = 0; j < SIZE; j++ ) 
        {
            c[ i ][ j ] = 0;
            for ( int k = 0; k < SIZE; k++ )
                c[ i ][ j ] = c[ i ][ j ] + ( a[ i ][ k ] * b[ k ][ j ] );
        }
    }
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
 ./hw10                  

                 -Matrix A- 

    1      0      5      2      1      4  
    3      3      2      1      3      3  
    1      4      1      5      5      3  
    0      3      4      2      1      5  
    1      5      0      4      5      5  
    1      4      4      4      4      5  

                 -Matrix B- 

    4      3      0      0      4      5  
    5      1      1      5      5      2  
    4      0      1      0      0      0  
    4      1      4      2      2      4  
    4      1      4      3      5      2  
    5      3      1      4      1      1  

                 -Matrix C- 

   56     18     21     23     17     19  
   66     25     24     38     47     34  
   83     26     48     57     62     46  
   68     21     24     42     29     21  
   90     32     46     68     67     46  
   97     30     45     60     57     42  

*/
