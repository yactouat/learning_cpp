#include<iostream>
#include<memory>

void fun(std::unique_ptr<int> ptr) {
    std::cout << "Value that ptr in fun() is pointing to: " << *ptr << std::endl;
    // no need to delete ptr, because it will be automatically deleted when it goes out of scope
}

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(30); // dynamically allocating memory
    fun(std::move(ptr)); // passing ownership to fun()

    // ptr no longer owns the memory, because we've transferred ownership to fun()
    // ! we should not use ptr here

    return 0;
}
