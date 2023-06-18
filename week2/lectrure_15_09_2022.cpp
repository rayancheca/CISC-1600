#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std; 

double cube( double x );

int main(){
double x;
cout << "enter x: "<<endl;
cin >> x;
cout << "x^3 = " << cube(x) << endl;
return 0;

}

double cube(double x ) {
	return pow(x,3);
}
