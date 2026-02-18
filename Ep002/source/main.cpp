#include <iostream>
#include <concepts>

template<typename T>
requires std::integral<T>
T add(T a, T b) {
    return a + b;
}
int main() {
    int x = 5, y = 10;
    std::cout << "The sum of " << x << " and " << y << " is: " << add(x, y) << std::endl;
    return 0;
}