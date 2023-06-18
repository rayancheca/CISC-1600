#include <iostream>
#include <iomanip>
#include <fstream>
#include<cassert>
#include<cstring>
#include<vector>

const int  MAX_LENGTH = 20;

using namespace std; 

void read_vector_data( /*name of file*/char filename[ ], /*how to store the data*/vector<double> &v );
void print_vector( const vector< double > &v );

int main( )
{
    int filename_length;
    char filename[ MAX_LENGTH ];
    vector<double> v;

    //enter data file name
    cout << endl;
    cout << setw( 30 )<< " Enter data file name: ";//data.dat file already created in same folder
    cin >> filename;

    filename_length = strlen( filename );

    //print data file name to make sure it has been properly entered
    cout << setw( 30 ) << " Filename: ";
    for( int i = 0; i < filename_length; ++i )
        cout << filename[ i ];
    cout << endl;

    read_vector_data( filename, v );
    print_vector( v );
    cout << endl;

    return 0;
}

void read_vector_data( char filename[ ], vector<double> &v )
{
    double x;//auxiliary variable to read and hold data then transfer it 

    //set up stream
    ifstream data_file( filename );
    //read data from file and oush it into vector
    if( data_file.is_open( ) )
    {
        while( data_file >> x )
            v.push_back( x );
        data_file.close( );//force close the data file
    }
    else
        cout << " Data file has not been opened " << endl;
    assert( v.size( ) != 0 );

}

void print_vector( const vector< double > &v )
{
    cout << endl;
    cout << setw( 30 ) << " Values read from the file: " << endl;
    for( int i = 0; i < v.size(); ++i )
        cout << setw( 8 ) << v.at( i );//error bound checking in place
    cout << endl;
}
/*
 ./files                   

        Enter data file name: data.dat
                    Filename: data.dat

   Values read from the file: 
     1.2     2.3     3.4     5.6     6.7

*/
