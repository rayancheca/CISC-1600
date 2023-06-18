#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
    int value_1,value_2;
    float average;

    cout<< endl;
    cout<<"Enter value 1: ";
    cin>> value_1;
    cout<<"Enter value 2: ";
    cin>> value_2;

    average = ( value_1 + value_2 ) /2.0;

    cout<<"average = " <<setw(8) << average <<endl;
    cout<< endl;

    return 0;
}