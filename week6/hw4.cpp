/*
              Name: Rayan Checa
        Assignment: HW4
          Due Date: 10/13/2022
       Description: compute the sum of a taylor series
              File: HW4.cpp
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int factorial(int n);
double taylor(double x, int n);

int main() {
  
  int n;
  double x;
 
  cout << endl;
  cout << setw(34) << " Enter the number x: ";
  cin >> x;
  cout << setw(34) << " Enter the number n: ";
  cin  >> n;

  cout << endl;
  cout << fixed << showpoint << setprecision(3);
  cout << setw(34) << "x: " << setw(7) << x << endl;
  cout << setw(34) << "n: " << setw(3) << n << endl;
  cout << setw(34) << " n factorial is: " << factorial(n) << endl;
  cout << " The sum of the taylor series is:  " << taylor(x, n) << endl;
  cout << endl;

  return 0;
}


int factorial(int n)
{
  int fact = 1;
  if((n==0) || (n==1))
    return 1;
  else
  {  
    for (int i = 1; i <= n; ++i)
      fact *= i;
    return fact;
  }
}

double taylor(double x, int n) 
{
  double sum = 0, value = 0;
  for (int i = 0; i <= n; i++)
  {
    sum = ((pow(x, i)) / factorial(i));
    value += sum;
  }
  
  return value;
}

/*
./hw4

              Enter the number x: 3
              Enter the number n: 5

                               x:   3.000
                               n:   5
                  n factorial is: 120
 The sum of the taylor series is:  18.400

*/

