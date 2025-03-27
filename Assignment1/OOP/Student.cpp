#include <iostream>
class Student {
private:
    std::string name;
    int id;
    double grade;
public:
    Student(std::string n, int i, double g) : name(n), id(i), grade(g) {}
    void display() {
        std::cout << "Name: " << name << ", ID: " << id << ", Grade: " << grade << "\n";
    }
};

int main() {
    Student s("Alice", 101, 92.5);
    s.display();
    return 0;
}
