#include <iostream>    // Include the iostream library
#define square(x) x*x  // Define a macro to square a number

int main() {  // Main function

    short x;  // Declare a variable for the input number  

    std::cout << "Enter a number you want to square: ";  // Ask the user for an input
    std::cin >> x;                                       // Get the input from the user
    std::cout << "The square of " << x << " in " << square(x);  // Print the square of the number 
    return 0;  // Return 0 to indicate successful completion
}