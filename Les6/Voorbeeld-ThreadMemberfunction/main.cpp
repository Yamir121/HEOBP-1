#include <iostream>
#include <thread>

int result = 0;

class Task {
    public:
        void square(int x) {
            std::cout << "Hello from thread " << std::this_thread::get_id() << std::endl;
            result += x * x;
        }
};


int main() {
    Task* taskPtr = new Task();

    std::thread thread(&Task::square, taskPtr, 25);
    thread.join();
//    thread.detach();

    std::cout << "accum = " << result << std::endl;

    delete taskPtr;

    return 0;
}