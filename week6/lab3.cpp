/*
              Name: Rayan Checa
        Assignment: Lab3
          Due Date: 10/03/2022
       Description: Print 10 random values from [0,1)
              File: lab3.cpp
*/

#include <iostream>
#include <iomanip>
#include <ctime>

const int MAX = 10;

unsigned int seed  = (unsigned int)time(0);

double random(unsigned int &seed);

using namespace std; 

int main()
{
    cout << fixed << showpoint << setprecision(5);
    cout << endl;
    for (int i = 0;i<MAX;++i)
        cout << random(seed) << endl;
    cout << endl;
    
    return 0;
}

double random(unsigned int &seed)
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = ((MULTIPLIER*seed) + INCREMENT)%MODULUS;
    
    return double(seed)/MODULUS;
}

/*
./lab3                  

0.42339
0.25945
0.60982
0.41565
0.21481
0.52473
0.69585
0.91961
0.81554
0.79783

*/
