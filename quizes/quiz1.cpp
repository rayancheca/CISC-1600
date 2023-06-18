/*
             Grade: 9/10
              Name: Rayan Checa
        Assignment: Quiz1
          Due Date: 10/24/2022
       Description: 
              File: quiz1.cpp
*/
/*
1.Enters from the keyboards the values of two variables named lower and upper 
such that both values are in range [0,1), and that the value of upper is greater 
from the value of lower by at leaast 0.1
2.Generates 100 random values in range [0,1), using random function and outputs
the percentage of random values genreated that fall within the range [lower,upper]*/


#include <iostream>
#include <iomanip>
#include <ctime>

const int MAX = 100;

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );

using namespace std;

int main(){

    double lower,upper,percentage,sum=0,rand;

    do{
    cout << endl;
    cout << setw(73) << "Enter the value of lower from [0,1): ";
    cin >> lower;
    }while(lower<0 || lower >= 1);
    do{
    cout << "Enter the value of upper from [0,1) but at least 0.1 greater than lower: ";
    cin >> upper;
    }while(upper < 0 || upper - lower < 0.1 || upper >= 1 );
    /*
    do{
    cout << setw(73) << "Enter the value of lower from [0,1): ";
    cin >> lower;
    cout << "Enter the value of upper from [0,1) but at least 0.1 greater than lower: ";
    cin >> upper;
    }while( lower < 0 || lower >= 1 || upper >= 1 || upper - loower < 0.1);
    */

    for(int i = 0;i<MAX;++i)
    {
        rand = random(seed);
        if(rand <= upper && rand >= lower)
            sum += 1;
    }

    
    cout << endl;
    cout << fixed << showpoint << setprecision(3);
    cout << setw(30) << sum << "% of values fall between [lower,upper] " << endl;
    cout << endl;

}


double random( unsigned int &seed) 
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (( MULTIPLIER*seed ) + INCREMENT )%MODULUS;
    
    return double( seed )/MODULUS;
}

/*
./quiz1                   

                                    Enter the value of lower from [0,1): 0.4
Enter the value of upper from [0,1) but at least 0.1 greater than lower: 0.6

                        14.000% of values fall between [lower,upper] 

*/