#include<iostream>

/**
 * this piece of code is also a good starting point to learn
 * how to debug C++ code in VSCode =>
 *  - `sudo apt install gdb`
*/
int main() {
    int x = 1; // a normal integer variable
    int* ptr = &x; // a pointer variable that holds the address of x

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value of ptr: " << ptr << std::endl; // this should be the same as the address of x
    std::cout << "Value that ptr is pointing to: " << *ptr << std::endl; // this should be the same as the value of x

    return 0;
}
