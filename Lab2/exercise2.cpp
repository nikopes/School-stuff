#include <iostream>  // Include the basic library

// Swap function without pointers or references
void swap_without(double a, double b) {
    double temp = a;
    a = b;
    b = temp;
    std::cout << "Inside function: a = " << a << ", b = " << b << "\n";
}

// Swap function with pointers
void swapUsingPointers(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

// Swap function with references
void swapUsingReference(double &a, double &b){
    double temp = a;
    a = b;
    b = temp;
}

int main() {
    
    // Declare variables
    double a = 0;
    double b = 0;
    
    // User input
    std::cout << "Please enter decimal number a: " << "\n";
    std::cin >> a;
    std::cout << "Please enter decimal number b: " << "\n";
    std::cin >> b;
    
    swap_without(a, b);  // Call function swap_without
    
    std::cout << "The numbers swapped are: a = " << a << " & b = " << b << std::endl;
    
    swapUsingPointers(&a, &b);  // Call function swapUsingPointers
    
    std::cout << "The numbers swapped using pointers are: a = " << a << " & b = " << b << std::endl;

    swapUsingReference(a, b);  // Call function swapUsingReference

    std::cout << "The numbers swapped back using reference are: a = " << a << " & b = " << b << std::endl;
    
    return 0;
}