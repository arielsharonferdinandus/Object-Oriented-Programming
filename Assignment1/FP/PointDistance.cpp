#include <iostream>
#include <cmath>

double distanceFromOrigin(double x, double y) {
    return sqrt(x*x + y*y);
}

int main() {
    std::cout << "Distance from Origin: " << distanceFromOrigin(3, 4) << "\n";
    return 0;
}
