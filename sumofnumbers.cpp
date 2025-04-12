#include <iostream>  // Include the iostream library

// Main function
int main() {
    
    unsigned long long int num;     // Declare a variable to store a number  (unsigned long long int to handle large numbers as well)
    unsigned long long int sum = 0;   // Declare a variable to store the sum of digits
    
    std::cout << "Enter a series of positive numbers with value less than 18446744073709551616: \n";  // Ask the user for input
    std::cin >> num;  // Get the input from the user

    if (!std::cin) {  // Check if the number is out of range
        std::cout << "Please enter a number within range!\n"; // If the number is out of range, display an error message
        return 1;  // Close the program with an error code
    }
    
    for (unsigned long long int i = num; i > 0; i /= 10) {  // Loop through the number until it becomes 0
        sum += i % 10;  // Add the last digit of the number to the sum}
    }

    std::cout << "The sum of the digits is: \n" << sum;  // Print the sum of digits

    return 0;  // Close the program succesfully

}