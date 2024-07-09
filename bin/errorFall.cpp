#include <iostream>

int main() {
    std::cout << "Starting the program..." << std::endl;
    

    int* ptr = nullptr;
    *ptr = 42;
    
    std::cout << "This line will never be executed." << std::endl;
    
    return 0;
}