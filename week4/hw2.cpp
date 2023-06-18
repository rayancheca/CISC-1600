/*Grade: 14/20 */


/*
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
    if(a>b && a>c)
    {
        cout << setw(29) << "The biggest number is a = " << setw(3) << a << endl;
    }
    else if (b>a && b>c)
    {
        cout << setw(29) << "The biggest number is b = " << setw(3) << b << endl;
    }
    else
    {
        cout << setw(29) << "The biggest number is c = " << setw(3) << c << endl;
    }
}

/*
./hw2                 

 Enter the first number 'a': 5
Enter the second number 'b': 4
 Enter the third number 'c': 3

                         a = 5.00
                         b = 4.00
                         c = 3.00

   The biggest number is a = 5.00

*/