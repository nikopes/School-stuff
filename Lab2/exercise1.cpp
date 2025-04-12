#include <iostream>  // Include the basic library
#include <cmath>  // Library for ceiling and floor functions

// Integer multiplication function
int multiply (int a, int b) {  
    return a * b;
}

// Overloaded double multiplication function
double multiply (double a, double b) {  
    return a * b; 
}

// Overloaded integer and double multiplication with a boolean flag
double multiply (int a, double b, bool flag) {
    
    double result = a * b;
    
    if (flag == false) {
        return result;
    }
    else {
        return round(result);
    }
}

int main() {  // Main loop
    
    // Declare variables and initialize them as 0
    int a = 0;
    int b = 0;
    double c = 0;
    double d = 0;
    
    // Outputs and user inputs
    std::cout << "Please give an integer: \n";
    std::cin >> a;
    std::cout << "Please give another integer: \n";
    std::cin >> b;
    std::cout << "Please give a decimal number: \n";
    std::cin >> c;
    std::cout << "Please give another decimal number: \n";
    std::cin >> d;
    
    // Return the product of user input integers and doubles
    std::cout << "The product of the integers is: " << multiply(a, b) << "\n";
    std::cout << "The product of the decimal numbers is: " << multiply(c, d) << std::endl;
    
    // Return the product of the first input integer and double according to false and true flag
    std::cout << "The product of an integer and double: " << multiply(a, c, false) << "\n";
    std::cout << "The product of an integer and double, rounded: " << multiply(a, c, true) << std::endl;
    
    // Close the program after succesfully executing
    return 0;

}