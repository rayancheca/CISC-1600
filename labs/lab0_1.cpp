#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main()
{
    double a,b,c,x1,x2;

    cout<<endl;
    cout<< "Enter the value for a: ";
    cin>> a;
    cout<< "Enter the value for b: ";
    cin>>b;
    cout<< "Enter the value for c: ";
    cin>>c;

    x1= (-b-sqrt((pow(b,2))-4*a*c))/2*a;
    x2= (-b+sqrt((pow(b,2))-4*a*c))/2*a;

    cout<<endl;
    cout<< fixed << showpoint << setprecision(3);
    cout<<" a =  "<<setw(6)<<a<<endl;
    cout<<" b =  "<<setw(5)<<b<<endl;
    cout<<" c =  "<<setw(6)<<c<<endl;
    cout<<"x1 =  "<<setw(6)<<x1<<endl;
    cout<<"x2 =  "<<setw(6)<<x2<<endl;
    cout<<endl;

    return 0;
}

/*
./lab0                  

Enter the value for a: 1
Enter the value for b: -3
Enter the value for c: 2

 a =   1.000
 b =  -3.000
 c =   2.000
x1 =   1.000
x2 =   2.000


*/