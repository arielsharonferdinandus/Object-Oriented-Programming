#include <iostream>
class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    void increment() { count++; }
    int getCount() { return count; }
};

int main() {
    Counter c;
    c.increment();
    std::cout << "Count: " << c.getCount() << "\n";
    return 0;
}
