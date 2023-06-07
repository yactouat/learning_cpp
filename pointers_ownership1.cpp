#include<iostream>

void fun(int* ptr) {
    std::cout << "Value that ptr in fun() is pointing to: " << *ptr << std::endl;
    delete ptr; // fun() takes ownership and is responsible for deleting ptr
}

int main() {
    int* ptr = new int(30); // dynamically allocating memory
    fun(ptr); // passing ownership to fun()

    // ptr is now a dangling pointer, because the memory it points to has been freed
    // ! we should not use ptr here

    return 0;
}
