#include <iostream>
class Rectangle {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() { return width * height; }
};

int main() {
    Rectangle rect(5, 10);
    std::cout << "Area: " << rect.area() << "\n";
    return 0;
}
