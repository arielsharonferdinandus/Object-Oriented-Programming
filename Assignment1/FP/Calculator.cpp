#include <iostream>
#include <functional>

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return b != 0 ? a / b : 0; }

int main() {
    std::cout << "Add: " << add(5, 3) << "\n";
    return 0;
}
