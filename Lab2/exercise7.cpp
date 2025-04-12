#include <iostream>  // Include the basic library

int main() {

    int x = 100;
    int* p1 = &x;  // Pointer 1 points to x
    int* p2 = p1;  // Pointer 2 points to pointer 1

    std::cout << "The value of pointer 1: " << *p1 << "\nPointer 2: " << *p2 << std::endl;

    *p1 = 200;  // Modify the value using p1
    
    std::cout << "After modification:\n";
    std::cout << "The value of pointer 1: " << *p1 << "\nPointer 2: " << *p2 << std::endl;

    return 0;  
}