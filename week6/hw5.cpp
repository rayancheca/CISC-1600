/*
              Name: Rayan Checa
        Assignment: HW5
          Due Date: 10/  /2022
       Description: Find the total distance travelled by a ball
              File: hw5.cpp
*/

#include <iomanip>
#include <iostream>

const double H = 0.00001;

using namespace std; 

int main(){

    double height, bounciness, distance = 0;

    cout << endl;

    do
    {
        cout << setw( 60 ) << "Enter the initial height of the ball: ";
        cin >> height;
    }while( height < 0 );

    do
    {
        cout << setw( 60 ) << "Enter the bounciuness ratio of the ball: ";
        cin >> bounciness;
    }while( bounciness < 0 || bounciness >= 1 );

    cout << endl;
    cout << fixed << showpoint << setprecision( 3 );
    cout << setw( 60 ) << "The initial height of the ball is: " << setw( 10 ) << height << endl;
    cout << setw( 60 ) << "The bounciness ratio of the ball is: " << setw( 10 ) << bounciness << endl;
    cout << endl;

    while( height > H )
    {
        distance += height;
        height *= bounciness;
        distance += height;
    }

    cout << setw( 60 ) << "The total distance travelled by the ball is: " << setw( 10 ) << distance << endl;
    cout << endl;

    return 0;
}

/*
 ./hw5

                      Enter the initial height of the ball: 64
                   Enter the bounciuness ratio of the ball: 0.75

                         The initial height of the ball is:     64.000
                       The bounciness ratio of the ball is:      0.750

               The total distance travelled by the ball is:    448.000

*/
