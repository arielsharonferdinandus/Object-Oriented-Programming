#include <iostream>
#include <cmath>

class Point {
private:
    double x, y;
public:
    Point(double x, double y) : x(x), y(y) {}
    double distanceFromOrigin() {
        return sqrt(x*x + y*y);
    }
};

int main() {
    Point p(3, 4);
    std::cout << "Distance from Origin: " << p.distanceFromOrigin() << "\n";
    return 0;
}
