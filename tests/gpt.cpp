#include <iostream>
#include <random>
#include <vector>
#include <cmath>

using namespace std;

// Define a structure for representing points in the unit square
struct Point
{
    double x;
    double y;
};

// Generate a random integer in the range [50, 100]
int generateRandomInt()
{
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dis(50, 100);
    return dis(gen);
}

// Generate a random double in the range [0, 1]
double generateRandomDouble()
{
    static random_device rd;
    static mt19937 gen(rd());
    uniform_real_distribution<> dis(0, 1);
    return dis(gen);
}

// Calculate the distance of a point to the origin
double calcDistanceToOrigin(const Point &point)
{
    // Use the Pythagorean theorem to calculate the distance
    return sqrt(point.x * point.x + point.y * point.y);
}

int main()
{
    // Create a vector of points with a maximum size of 100
    vector<Point> points(100);

    // Generate a random size for the vector
    int n = generateRandomInt();

    // Populate the vector with random points
    for (int i = 0; i < n; i++)
    {
        Point point;
        point.x = generateRandomDouble();
        point.y = generateRandomDouble();
        points[i] = point;
    }

    // Find the point with the largest distance to the origin
    Point maxPoint;
    double maxDistance = 0;
    for (const Point &point : points)
    {
        double distance = calcDistanceToOrigin(point);
        if (distance > maxDistance)
        {
            maxPoint = point;
            maxDistance = distance;
        }
    }

    // Output the point with the largest distance to the origin
    cout << "Point with largest distance to origin: (" << maxPoint.x << ", " << maxPoint.y << ")\n";

    return 0;
}