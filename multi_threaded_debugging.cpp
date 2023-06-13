// TODO
#include <iostream>
#include <thread>
#include <vector>

void print_thread_id(int id) {
    std::cout << "Hello from thread " << id << "!\n";
}

/**
 * creating a vector of threads and start each thread to execute the `print_thread_id` function,
 * this function simply prints a message to the console indicating the thread ID;
 * after all threads have completed, the program returns 0
*/
int main() {
    std::vector<std::thread> threads;
    for(int i = 0; i < 5; ++i) {
        /**
         * for each iteration, we create a new thread and add it to the vector of threads,
         * each new thread will execute the `print_thread_id` function with the current value of `i`
        */
        threads.push_back(std::thread(print_thread_id, i));
    }
    
    for(auto& thread : threads) {
        /**
         * `std::thread::join` will block the execution of the `main` thread 
         * until the thread on which it's called has completed
        */
        thread.join();
    }
    
    return 0;
}
