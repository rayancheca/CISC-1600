/*
              Name: Rayan Checa
        Assignment: lab11
          Due Date: 12/05/2022 
              File: lab11.cpp
       Description: Write a program that:
	                1. Creates an empty character vector and populates that vector with
                       character values stored in data file char-data.dat
                    2. your program should use two function similar to those introduced in the class
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cassert>
#include <cstring>
#include <vector>

const int  MAX_LENGTH = 20;

using namespace std; 

void read_vector_data( char filename[ ], vector<char> &v );
void print_vector( const vector<char> &v );

int main( )
{
    char filename[ MAX_LENGTH ];
    vector<char> v;

    cout << endl;
    cout << setw( 30 ) << " Enter data file name: ";
    cin >> filename;

    read_vector_data( filename, v );
    print_vector( v );
    cout << endl;

    return 0;
}

void read_vector_data( char filename[ ], vector<char> &v )
{
    char x;

    ifstream data_file( filename );
    
    if( data_file.is_open( ) )
    {
        while( data_file >> x )
            v.push_back( x );
        data_file.close( );
    }
    else
        cout << " Data file has not been opened " << endl;
    assert( v.size( ) != 0 );
}

void print_vector( const vector<char> &v )
{
    cout << endl;
    cout << setw( 30 ) << " Values read from the file: " << endl;
    for( int i = 0; i < v.size( ); ++i )
        cout << setw( 8 ) << v.at( i );
    cout << endl;
}

/*
 ./lab11                   

        Enter data file name: char-data.dat

   Values read from the file: 
       1       2       2       3       R       q       4       ?       !

*/
