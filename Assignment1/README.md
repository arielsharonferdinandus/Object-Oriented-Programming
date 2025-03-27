# Functional vs Object-Oriented Programming in C++

## Overview
This project demonstrates the implementation of five different programming challenges using both **Object-Oriented Programming (OOP)** and **Functional Programming (FP)** paradigms in **C++**. It aims to showcase the differences and advantages of each approach.

## Features Implemented
1. **Calculator** - Performs basic arithmetic operations.
2. **Student** - Stores and displays student information.
3. **Rectangle** - Calculates the area of a rectangle.
4. **Counter** - Increments and retrieves the count.
5. **Point** - Represents a point in 2D space and calculates distance from the origin.

## Project Structure
```
/Functional_vs_OOP_CPP
│── OOP/
│   ├── calculator.cpp
│   ├── student.cpp
│   ├── rectangle.cpp
│   ├── counter.cpp
│   ├── point.cpp
│
│── FP/
│   ├── calculator.cpp
│   ├── student.cpp
│   ├── rectangle.cpp
│   ├── counter.cpp
│   ├── point.cpp
│
└── README.md
```

---

## Implementations

### 1️⃣ Calculator (Arithmetic Operations)
#### **OOP Approach**
- Uses a `Calculator` class with methods for addition, subtraction, multiplication, and division.
```cpp
class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) { return b != 0 ? a / b : 0; }
};
```

#### **FP Approach**
- Uses standalone functions instead of objects.
```cpp
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
```

##### **Sample Output**
```
Addition: 5 + 3 = 8
Subtraction: 10 - 4 = 6
Multiplication: 7 * 2 = 14
Division: 8 / 2 = 4
```

---

### 2️⃣ Student (Information Storage)
#### **OOP Approach**
- Defines a `Student` class with private attributes.
```cpp
class Student {
private:
    std::string name;
    int id;
    double grade;
public:
    Student(std::string n, int i, double g) : name(n), id(i), grade(g) {}
    void display() { std::cout << "Name: " << name << " ID: " << id << " Grade: " << grade << "\n"; }
};
```

#### **FP Approach**
- Uses `std::tuple` to represent a student record.
```cpp
std::tuple<std::string, int, double> createStudent(std::string name, int id, double grade) {
    return {name, id, grade};
}
```

##### **Sample Output**
```
Name: Alice ID: 101 Grade: 85.5
```

---

### 3️⃣ Rectangle (Area Calculation)
#### **OOP Approach**
```cpp
class Rectangle {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() { return width * height; }
};
```

#### **FP Approach**
```cpp
double area(double width, double height) {
    return width * height;
}
```

##### **Sample Output**
```
Rectangle Area: 5 x 4 = 20
```

---

### 4️⃣ Counter (Increment & Retrieve Count)
#### **OOP Approach**
```cpp
class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    void increment() { count++; }
    int getCount() { return count; }
};
```

#### **FP Approach**
```cpp
int increment(int count) {
    return count + 1;
}
```

##### **Sample Output**
```
Initial Count: 0
After Increment: 1
After Increment: 2
```

---

### 5️⃣ Point (Distance Calculation)
#### **OOP Approach**
```cpp
class Point {
private:
    double x, y;
public:
    Point(double x, double y) : x(x), y(y) {}
    double distanceFromOrigin() {
        return sqrt(x*x + y*y);
    }
};
```

#### **FP Approach**
```cpp
double distanceFromOrigin(double x, double y) {
    return sqrt(x*x + y*y);
}
```

##### **Sample Output**
```
Point (3, 4) Distance from Origin: 5
```

---

## How to Run the Programs
### Compile OOP Programs:
```sh
g++ oop/calculator.cpp -o calculator && ./calculator
```
### Compile FP Programs:
```sh
g++ fp/calculator.cpp -o calculator && ./calculator
```

**Author:** Ariel Sharon F

