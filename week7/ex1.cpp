/*given ellipse  (x^2)/9 + (y^2)/4  = 1  
  write a program that finds the sides of the 
rectangle with the largest area that can be inscribed into the ellipse*/

/*y^2 = (1-(x^2)/9)*4
  y=2sqrt((9-x^2)/9)
  y=(2/3)sqrt(9-x^2)*/

/*generate values of x in range 0<= x < 3
with one small step(which determines the accuracy)*/

/*for each such x, find the y coordinate of the point on the ellipse*/

/*find the area of the rectangle corresponding to the point (x.y)*/

/*compare the computed area to the maximum area computed*/


#include <iostream>
#include <iomanip>
#include <cmath>

const double ACC = 0.0000001;

using namespace std;
 
// Function to find the area
// of the rectangle
//area_max = DBL_MIN; 

int main()
{
    double x=0,y,max_area=0,area,x_max=0,y_max=0;
    do
    {
        x += ACC;
        y = 2.0/3.0*sqrt(9-pow(x,2));
        area = 4*x*y;
        if (area > max_area)
        {
            max_area = area;
            x_max = x;
            y_max = y;
        }
    }while(x<3);
    cout << "max x = " << x_max << endl;
    cout << "max y = " << y_max << endl;
    cout << "max area = " << max_area << endl;

    return 0;
}