#include <bits/stdc++.h>
using namespace std;

double calculatePI(int numOfPoints) {
    int pointsInsideCircle = 0;

    for (int i = 0; i < numOfPoints; ++i) {
        double x = ((double)rand() / RAND_MAX) * 80 - 40;
        double y = ((double)rand() / RAND_MAX) * 80 - 40;

        if (x * x + y * y <= 1600) {

            pointsInsideCircle++;
        }
    }

    //points inside square = num of points (total points)
    return 4.0 * pointsInsideCircle / numOfPoints;
}

int main() {

    srand(time(0));

    int numOfPoints;
    cout << "Enter the number of points to throw: ";
    cin >> numOfPoints;

    double pi = calculatePI(numOfPoints);
    cout << "Approximate value of PI: " << pi << std::endl;

    return 0;
}