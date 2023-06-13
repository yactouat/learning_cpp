#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        // Conditional breakpoint here, such as `i == 5`
        sum += i;
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
