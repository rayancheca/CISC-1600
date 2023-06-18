/*
             Grade: 14/20
              Name: Rayan Checa
        Assignment: HW2
          Due Date: 10/03/2022
       Description: functions to get max of three numbers
              File: hw2.cpp
*/

#include <iostream>
#include <iomanip>

using namespace std; 

void max_three(double &a, double &b, double &c);

int main()
{
    double a,b,c;

    cout << endl;
    cout << setw(29) << "Enter the first number 'a': ";
    cin >> a;
    cout << "Enter the second number 'b': ";
    cin >> b;
    cout << setw(29) << "Enter the third number 'c': ";
    cin >> c;
    
    cout << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << setw(29) << " a = " << setw(4) << a << endl;
    cout << setw(29) << " b = " << setw(4) << b << endl;
    cout << setw(29) << " c = " << setw(4) << c << endl;
    cout << endl;
    max_three(a,b,c);
    cout << endl;

    return 0;

}

void max_three(double &a, double &b, double &c)
{
    cout << fixed << showpoint << setprecision(2);
    double x  = max(a,b);
    x = max(x,c);
    cout << setw(29) << "The biggest number = " << setw(3) << x << endl;
}

/*
 ./hw2_2

 Enter the first number 'a': 3
Enter the second number 'b': 4
 Enter the third number 'c': 5

                         a = 3.00
                         b = 4.00
                         c = 5.00

        The biggest number = 5.00
        
*/