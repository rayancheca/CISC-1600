#include <iostream>
#include <iomanip>
#include <vector>

const int SIZE = 12;

void function1();
void print_vector( vector<int> v );
void print_vector2( const vector<int> &v );

using namespace std;

int main()
{
    int a[ SIZE ] = { 1, 2, 3, 5, 8, 13, 21, 25, 16 ,9, 4, 7 };
    vector<int> v( SIZE );
    for ( int i = 0; i < SIZE; ++i )
        v[ i ] = a[ i ];

    cout << "v.front() = " << v.front() << endl;
    cout << "v[0] = " << v[0] << endl; 
    cout << "v.back() = " << v.back() << endl;
    cout << "v[SIZE -1] = " << v[ SIZE - 1 ]/*or v[ v.size( ) - 1 ]*/ << endl; 
    cout << v << endl;

    return 0;    
}
void function1()
{
    int a[ SIZE ] = { 1, 2, 3, 5, 8, 13, 21, 25, 16 ,9, 4, 7 };
    vector<int> v( SIZE ) , w;
    for ( int i = 0; i < SIZE; ++i )
        w[ i ] = i;
    for ( int i = 0; i < SIZE; ++i )
        v[ i ] = a[ i ];
    v.swap( w );
}
//function to sort elements of v in increasing order
/*
    sort( v.begin() , v.end() );    
*/

//functions and vectors
//passed by value
void print_vector( vector<int> v )
{
    for( int i = 0; i < v.size(); ++i )
        cout << setw( 3 ) << v[ i ];
    cout << endl;
}
//passing by const reference
void print_vector2( const vector<int> &v )
{
    for( int i = 0; i < v.size(); ++i )
        cout << setw( 3 ) << v.at( i );//error bound checking in place
    cout << endl;
}