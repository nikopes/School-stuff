// I read from the interned that using namespaces std is generally considered as bad practice, so I have refrained from using it.
// For practice on some codes I have used it, but mostly I am trying to avoid it.

#include <iostream>  // Include the iostream library

int main() {  // Main function

    unsigned long long int num = 0;  // Declare a variable for the input number (unsigned long long int to handle large numbers as well)
    unsigned long long int rev_num = 0;  // Declare a variable to store the reversed number    
    
    std::cout << "Enter a series of positive numbers with value less than 9999999999999999999: \n" << std::endl;  // Ask the user for input
    std::cin >> num;  // Get the input from the user                      
    
    for (unsigned long long int i = num; i > 0; i /= 10) {  // Loop through the number until it becomes 0
        rev_num = rev_num * 10 + i % 10;  // Reverse the number by adding the last digit to the reversed number
        num = num / 10;  // Remove the last digit from the original number
    }

    std::cout << "The reversed number is: " << rev_num << std::endl;  // Print the reversed number

    return 0;  // Close the program successfully
}