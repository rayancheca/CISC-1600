/*
              Name: Rayan Checa
        Assignment: hw12
          Due Date: 12/08/2022 
              File: hw12.cpp
       Description: Write a program that 
	                1. Creates a structure point which can hold x and y coordinates of random points in the   unit square
	                2. Declares a vector of structures point which can accommodate up to 100 structures
	                3. Generates a random integer in range [ 50 , 100 ], int n. This is the size of the vector
	                4. Populates the vector with n structure each with randm values for x and y.
                    5. Outputs the points with the largest distance to the point of origin

*/

#include <iostream>
#include <iomanip>
#include <random>
#include <vector>
#include <cmath>

struct Point
{
    double x;
    double y;
};

unsigned int seed  = ( unsigned int )time( 0 );

double random( unsigned int &seed );
void create_vector( std::vector<Point> &points, int n );
double calcDistanceToOrigin( const Point &point );
double maxDistance(  std::vector<Point> &points );
int generateRandomInt( );

using namespace std;

int main( ) 
{
    cout << fixed << showpoint << setprecision( 4 );

    vector<Point> points;

    int n = generateRandomInt( );
    create_vector( points, n );
    double maxDist = maxDistance( points );
    
    cout << endl;
    cout << setw( 15 ) << "max dist: "<< maxDist <<endl;
    cout << endl;

    return 0;
}

int generateRandomInt( )
{
    int n = int( 50 + 51*random ( seed ) ); 
    return n;
}

void create_vector( vector<Point> &points, int n )
{
    for ( int i = 0; i < n; ++i )
    {
        Point p;
        p.x = random( seed );
        p.y = random( seed );
        points.push_back( p ); 
    }
}

double calcDistanceToOrigin( const Point &point )
{
    return sqrt(point.x * point.x + point.y * point.y);
}

double maxDistance( vector<Point> &points )
{
    double distance = 0, maxDist = 0;
    
    Point p;

    for( int i = 0; i < points.size( ); ++i )
    {
        distance = calcDistanceToOrigin( points.at( i ) );
        if( distance > maxDist )
        {
            maxDist = distance;
            p = points.at(i);
        }
    }

    cout << endl;
    cout << " The points with the maximum distance from the origin are --> " << endl;
    cout << endl;
    cout << setw( 15 ) << "x: " << p.x << endl;
    cout << setw( 15 ) << "y: " << p.y << endl;

    return maxDist;
}

double random( unsigned int &seed ) 
{
    const int MODULUS = 15749;
    const int MULTIPLIER = 69069;
    const int INCREMENT = 1;
    seed = (( MULTIPLIER*seed ) + INCREMENT )%MODULUS;
    
    return double( seed )/MODULUS;
}
/*
 ./hw12                  

 The points with the maximum distance from the origin are --> 

            x: 0.9736
            y: 0.9712

     max dist: 1.3752

*/