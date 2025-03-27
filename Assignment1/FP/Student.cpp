#include <iostream>
#include <tuple>

std::tuple<std::string, int, double> createStudent(std::string name, int id, double grade) {
    return {name, id, grade};
}

void displayStudent(const std::tuple<std::string, int, double>& student) {
    std::cout << "Name: " << std::get<0>(student) << ", ID: " << std::get<1>(student) 
              << ", Grade: " << std::get<2>(student) << "\n";
}

int main() {
    auto student = createStudent("Alice", 101, 92.5);
    displayStudent(student);
    return 0;
}
