#include <iostream>
#include "mole.h"
#include <math.h>
int main() {
    double a = 1; //Velocity
    double west = 0; // Left domain limit
    double east  = 1; // Right domain limit

    double k = 2; //Order of Accuracy
    double m  = 50; // Number of grid cells

    double dx = (east - west) / m; // Time Step
    int t = 1; //Simulation Time
    double dt = dx / std::abs(a);

    Div = D(k, m, dx);
    Inter = I(m, 0.5);

    //vec grid()

    U = sin(2*pi*) //IC
    return 0;
}
