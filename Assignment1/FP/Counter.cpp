#include <iostream>

int increment(int count) {
    return count + 1;
}

int main() {
    int count = 0;
    count = increment(count);
    std::cout << "Count: " << count << "\n";
    return 0;
}
