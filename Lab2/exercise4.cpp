#include <iostream>  // Include the basic library
#define square(x) x*x  // Define a macro to square a number

int main() {
    
    // Declare a variable for user input
    int a = 0;
    
    // Infinite loop
    while(1){
        std::cout << "Please give a number: ";
        std::cin >> a;
        if (a < 0) {
            break;  // Stop the program with negative input
        }
        else if (a == 0) {
            continue;  // Don't compute, just continue if user input is 0
        }
        else {  // Show the result of input number square
            std::cout << "Square of " << a << " is: " << square(a) << std::endl;
        }
    }
}