#include <iostream>
#include <iomanip> /*for formatting the output*/

using namespace std;

float main(){
    float num1,num2,avg,sum;
    cout << "enter the first num: ";
    cin >> num1;
    cout << "enter the second number: ";
    cin >> num2;
    sum= num1+num2;
    avg= sum/2;

    cout<< "The average of the two numbers is: " << avg <<endl;
    return 0;

}

