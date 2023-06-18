#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main()
{
    double sum,pizza12,pizza14,cash,change;
    string name;

    cout<<"enter your name: "<<endl;
    cin>> name;
    cout<< "enter num of 12: "<<endl;
    cin>> pizza12;
    cout<< "Enter the number of 14: "<<endl;
    cin>>pizza14;

    sum = (pizza12*12.39)+(15.98*pizza14);

    cout<< "How much cash you got bro?: "<<endl;
    cin>>cash;

    change= cash-sum;

    cout<< fixed << showpoint << setprecision(3);
    cout<<"your total is:"<<sum<<endl;
    cout<<"your change:" <<change<<endl;

    return 0;
}