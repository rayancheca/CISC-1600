#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>
using namespace std;

void generatePoints(double points[20][2]) {
    srand(time(NULL));
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 2; j++) {
            points[i][j] = ((double) rand()) / RAND_MAX;
        }
    }
}

double largestDistance(double points[20][2]) {
    double maxDistance = 0;
    double currentDistance = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = i + 1; j < 20; j++) {
            currentDistance = sqrt(pow((points[i][0] - points[j][0]), 2) + pow((points[i][1] - points[j][1]), 2));
            if (currentDistance > maxDistance) {
                maxDistance = currentDistance;
            }
        }
    }
    return maxDistance;
}

void outputPoints(double points[20][2], double maxDistance) {
    cout << "Points with the largest distance are: " << endl;
    cout << "x coord     y coord" << endl;
    for (int i = 0; i < 20; i++) {
        for (int j = i + 1; j < 20; j++) {
            if (sqrt(pow((points[i][0] - points[j][0]), 2) + pow((points[i][1] - points[j][1]), 2)) == maxDistance) {
                cout << points[i][0] << "     " << points[i][1] << endl;
                cout << points[j][0] << "     " << points[j][1] << endl;
            }
        }
    }
}

int main() {
    double points[20][2];
    generatePoints(points);
    double maxDistance = largestDistance(points);
    outputPoints(points, maxDistance);
    return 0;
}