/*
             Grade: 9/10
              Name: Rayan Checa
        Assignment: lab8
          Due Date: 11/14/2022
              File: lab8.cpp
       Description: Design a recursive function for computation of sum for integer values for values greater than or equal to 1 
*/

#include <iostream>
#include <iomanip>

int recursive_sum( int n );

using namespace std; 

int main(){

    int n; 

    cout << endl;
    do
    {
        cout << setw( 40 ) << "Enter the value of n greater than 1: ";
        cin >> n; 
    }   while( n <= 1 );
    cout << "The sum of all integers from 1 to n is: " << recursive_sum( n ) << endl;
    cout << endl;

    return 0; 
}

int recursive_sum( int n )
{
    if( n == 1 )
        return n;
    else
        return n + recursive_sum(n-1);
}
/*
./lab8                  

   Enter the value of n greater than 1: 3
The sum of all integers from 1 to n is: 6

*/