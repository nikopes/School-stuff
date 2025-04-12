// Include the necessary libraries
#include <iostream>  
#include <string>

int main() {  // Main function

    std::string a;  // Declare a string variable
    std::string reverse;  // Declare a string variable for reverses string

    int vowels = 0;  // Initialize a variable to count vowels

    std::cout << "Please enter a string: ";  // Ask the user for an input
    std::getline(std::cin, a);               // Get the whole input from the user 

    std::cout << "The length of the string is: " << a.length() << "\n";  // Print the length of the string

    for (char &c : a) {  // Loop through each character in the string
        reverse = c + reverse;  // Reverse the string by prepending the character
        c = std::toupper(c);  // Convert each character to uppercase
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {  // Check if the character is a vowel
            vowels++;
        }
    }
    
    std::cout << "The string you entered in uppercase is: " << a << std::endl;  // Print the string in uppercase
    std::cout << "The string in reverse is: " << reverse << std::endl;  // Print the reversed string
    std::cout << "The number of vowels in the string is: " << vowels << std::endl;  // Print the number of vowels

    return 0;  // Return 0 to indicate successful completion

}