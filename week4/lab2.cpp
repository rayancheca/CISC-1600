
/*Grade: 10/10 */


/*
              Name: Rayan Checa
        Assignment: Lab2
          Due Date: 09/26/2022
       Description: Swap the values of a and b
              File: lab2.cpp
*/

#include <iostream>
#include <iomanip>

using namespace std; 

void enter_ab(double &a, double &b);
void swap(double &a, double &b);

int main()
{
    double a,b;

    enter_ab(a,b);

    cout << fixed << showpoint << setprecision(2);
    cout << "a = " << setw(6) << a << endl;
    cout << "b = " << setw(6) << b << endl;

    swap(a,b);

    cout << endl;
    cout << "After swapping: " << endl;
    cout << endl;
    cout << "a = " <<setw(6) << a << endl; 
    cout << "b = " <<setw(6) << b << endl;
    cout << endl;

    return 0;
}

void enter_ab(double &a, double &b)
{   
    cout << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << endl;
}

void swap(double &a, double &b)
{
    double temp = a;
    a=b;
    b=temp;
}

/*
./lab2                  

Enter a: 30
Enter b: 4

a =  30.00
b =   4.00

After swapping: 

a =   4.00
b =  30.00

*/