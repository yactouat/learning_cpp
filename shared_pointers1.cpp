#include<iostream>
#include<memory>

// to compile: `g++ -std=c++11 shared_pointers1.cpp -o shared_pointers1`
int main() {
    std::shared_ptr<int> sptr = std::make_shared<int>(20);

    std::cout << "Value that sptr is pointing to: " << *sptr << std::endl;
    std::cout << "Use count of sptr: " << sptr.use_count() << std::endl;

    {
        std::shared_ptr<int> sptr2 = sptr; // another shared pointer pointing to the same memory address
        std::cout << "Value that sptr2 is pointing to: " << *sptr2 << std::endl;
        std::cout << "Use count of sptr: " << sptr.use_count() << std::endl; // use_count should be 2 now
    }

    std::cout << "Use count of sptr after sptr2 is out of scope: " << sptr.use_count() << std::endl; // use_count should be 1 now

    return 0;
}
