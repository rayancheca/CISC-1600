#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 

void enter_ab(double &a, double &b)
{   
    cout << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
}

void swap(double &a, double &b)
{
    double temp = a;
    a=b;
    b=temp;
}

int main()
{
		double a,b;
		enter_ab(a,b);
        cout << endl;
		cout << "The value of 'a' was " << a << " and the value of 'b' was " << b << endl;
		swap(a,b);
        cout << endl;
        cout << "The new value of 'a' is " << a << " and the new value 'b' is " << b << endl;
        cout << endl;
        return 0;
}


