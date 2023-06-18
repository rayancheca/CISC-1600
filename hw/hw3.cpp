


/*
             Grade: 17/20
              Name: Rayan Checa
        Assignment: HW3
          Due Date: 10/06/2022
       Description: Do three values constitute a triangle?
              File: HW3.cpp
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void triangle(double &a, double &b, double &c);

int main()
{
    double a, b, c;
    
    cout << endl;
    cout << "Enter value a : ";
    cin >> a;
    cout << "Enter value b : ";
    cin >> b;
    cout << "Enter value c : ";
    cin >> c;

    cout << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << setw(16) << " a = " << a << endl;
    cout << setw(16) << " b = " << b << endl;
    cout << setw(16) << " c = " << c << endl;
    triangle(a,b,c);
    cout << endl;
    
    return 0;

}

void triangle(double &a, double &b, double &c)
{
    string tria = "constitue a triangle";
    if (a+b > c && a+c > b && b+c > a)
    {
      cout << tria << endl;
    }
    else
    {
      cout << "Do not " << tria << endl;
    }
    
}


// Values for not a triangle 
/*
./HW3

Enter value a : 4
Enter value b : 2
Enter value c : 1

            a = 4.00
            b = 2.00
            c = 1.00
Do not constitue a triangle

*/

// Values for a triangle
/*

./HW3                 

Enter value a : 3
Enter value b : 4
Enter value c : 5

            a = 3.00
            b = 4.00
            c = 5.00
constitue a triangle

 */
// for a right angled triangle 
//(pow(a,2) == pow(b,2) + pow(c,2)) || (pow(b,2) == pow(a,2) + pow(c,2)) || (pow(c,2) == pow(a,2) + pow(b,2))