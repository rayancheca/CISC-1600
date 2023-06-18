/*
 write a loop to print the values of 2^n for as long as the value of 2^n is less than 100
*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

    int n=0,max = 100,power=1;

    while(power<max)
    {
        cout << power << endl;
        power = pow(2,n++);
    }

    return 0;
}