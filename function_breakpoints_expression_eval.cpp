#include <iostream>

void calculate_and_print_sum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        // let's watch the `sum` variable in the watch section of the VSCode Debug View (Ctrl + Shift + D)
        // you need to add a breakpoint beforehand
        sum += i;
        // at this point you should be able to evaluate code in the debug console (Ctrl + Shift + Y)
        // ! if you change the value of a variable in the debug console, the program will continue with the new value
    }
    std::cout << "Sum: " << sum << std::endl;
}

/**
 * let's say we want to stop execution at the start of `calculate_and_print_sum` only when it's called from the main function:
 * - go to the VSCode Run View (Ctrl + Shift + D)
 * - right click on the breakpoints section and select "Add Function Breakpoint..."
 * - type in the name of the function, in this case `calculate_and_print_sum`
*/
int main() {
    calculate_and_print_sum(1, 5);
    calculate_and_print_sum(1, 10);
    calculate_and_print_sum(1, 15);
    return 0;
}
