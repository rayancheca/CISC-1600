/*
             Grade: 19/20 
              Name: Rayan Checa
        Assignment: HW1
          Due Date: 09/29/2022
       Description: Functions for area of a triangle using herons formula
              File: hw1.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

double aoft(double a, double b, double c);

using namespace std;
  
int main()
{
  double a, b, c;

  cout << endl;
  cout << "Enter the value the first side: " << endl;
  cin >> a;
  cout << "Enter the value the second side: " << endl;
  cin >> b;
  cout << "Enter the value the third side: " << endl;
  cin >> c;

  cout << endl;
  cout << fixed << showpoint << setprecision(2);
  cout << setw(10) <<    "a = " << setw(4) << a << endl;
  cout << setw(10) << "   b = " << setw(4) << b << endl;
  cout << setw(10) << "   c = " << setw(4) << c << endl;
  cout << setw(10) << "Area = " << setw(4) << aoft(a,b,c) << endl;
  cout << endl;

  return 0;
}

double aoft(double a, double b, double c)
{
  double p, ar;
  p = (a+b+c)/2;
  ar =  sqrt(p*(p-a)*(p-b)*(p-c));
  return ar;
}


/*
./hw1                 

Enter the value the first side: 
3
Enter the value the second side: 
4
Enter the value the third side: 
5

      a = 3.00
      b = 4.00
      c = 5.00
   Area = 6.00
*/