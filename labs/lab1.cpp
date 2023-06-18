/*
             Grade: 10/10 
              Name: Rayan Checa
        Assignment: lab1
          Due Date: 09/19/2022
       Description: Functions for roots of the quadratic equation
              File: lab1.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

double root_1(double a, double b, double c);
double root_2(double a, double b, double c);
 
using namespace std;

int main()
{
   double a, b, c;
 
   cout << endl;
   cout <<  "Enter the value for a: ";
   cin >> a;
   cout <<  "Enter the value for b: ";
   cin >> b;
   cout <<  "Enter the value for c: ";
   cin >> c;
 
   cout << endl;
   cout <<  fixed  <<  showpoint  <<  setprecision(3);
   cout << " a =  " << setw(6) << a << endl;
   cout << " b =  " << setw(5) << b << endl;
   cout << " c =  " << setw(6) << c << endl;
   cout << "x1 =  " << setw(6) << root_1(a,b,c) << endl;
   cout << "x2 =  " << setw(6) << root_2(a,b,c) << endl;
   cout << endl;
 
   return 0;
}


double root_1(double a, double b, double c)
{
   return (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);
}

double root_2(double a, double b, double c)
{
   return (-b  + sqrt(pow(b,2) - 4*a*c))/(2*a);
}


/*
./lab1                  

Enter the value for a: 1
Enter the value for b: -3
Enter the value for c: 2

 a =   1.000
 b =  -3.000
 c =   2.000
x1 =   1.000
x2 =   2.000

 */
