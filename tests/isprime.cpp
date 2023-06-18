#include <iostream>
#include <iomanip>

using namespace std; 

bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0 )
            return false;
    }
    return true;
}

int main()
{
    for (int i = 1; i <= 10000; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
            cout << i << "is prime number" << endl;
    }

}

 /*int number; 
    cout << "Enter nuber: ";
    cin >> number;

    bool isPrimeFlag = isPrimeNumber(number);
    if (isPrimeFlag)
        cout << "Prime number " << endl;
    else
        cout < "Not prime number" << endl;
    */