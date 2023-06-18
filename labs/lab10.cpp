/*
             Grade: 10/10
              Name: Rayan Checa
        Assignment: lab10
          Due Date: 12/28/2022 
              File: lab10.cpp
       Description: Make a recursive function to find n choose k 
*/

#include <iostream>
#include <iomanip>

int choose( int n, int k );

using namespace std; 

int main( )
{
    int n, k;

    do
    {
        cout << endl;
        cout << setw( 30 ) << " Enter the value of n: ";
        cin >> n;
        cout << endl;

    }   while( n < 0 );

    do
    {
        cout << setw( 30 ) << " Enter the value of k: ";
        cin >> k;
        cout << endl;

    }   while( k > n || k < 0 );

    cout << setw( 30 ) <<  " The value of n is: " << n << endl;
    cout << endl;

    cout << setw( 30 ) <<  " The value of k is: " << k << endl;
    cout << endl;

    cout << setw( 30 ) << " n choose k is: " << choose( n, k ) << endl;
    cout << endl;

    return 0; 

}

int choose( int n, int k )
{
    if( k == 0 || k == n ) 
        return 1;
    else
        return ( choose ( n - 1, k )  ) + choose( n - 1, k - 1 );
}
/*
./lab10                   

        Enter the value of n: 4

        Enter the value of k: 2

           The value of n is: 4

           The value of k is: 2

               n choose k is: 6

*/