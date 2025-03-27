#include <iostream>
#include <functional>

double area(double width, double height) {
    return width * height;
}

int main() {
    std::cout << "Area: " << area(5, 10) << "\n";
    return 0;
}
