#include <iostream>  // Include the basic input-output stream library
#include <string>  // Include the string library
#define MIN_LENGTH 8  // Define a macro for the minimum password length

int main() {

    bool hasLower = false;  // Flag to check for lowercase letters
    bool hasUpper = false;  // Flag to check for uppercase letters
    bool hasDigit = false;  // Flag to check for digits
    bool hasSpecial = false;  // Flag to check for special characters

    std::string password;  // Declare a string variable to store the password
    int length;  // Declare an integer variable to store the length of the password

    std::cout << "Your password should have no spaces, at least 8 characters, 1 uppercase letter, 1 lowercase letter,\n";
    std::cout << " 1 digit, and 1 special character.\n";  // Print the password requirements
    std::cout << "Enter a password: ";  // Prompt the user to enter a password
    std::cin >> password;  // Get the password from the user

    length = password.length();  // Get the length of the password

    if(length < MIN_LENGTH) {  // Check if the password length is less than 8 characters
        std::cout << "Your password should contain at least 8 characters.\n";
        return 1;  // Close the program with an error code
    }
    
    for (int i = 0; i < length; i++) {  // Loop through each character in the password
        if (islower(password[i])) {  // Check if the character is a lowercase letter
            hasLower = true;  // Set the lowercase flag to true
        }
        if (isupper(password[i])) {  // Check if the character is an uppercase letter
            hasUpper = true;  // Set the uppercase flag to true
        }
        if (isdigit(password[i])) {  // Check if the character is a digit
            hasDigit = true;  // Set the digit flag to true
        }
        if (ispunct(password[i])) {  // Check if the character is a special character
            hasSpecial = true;  // Set the special character flag to true
        }
    }

    if (hasLower && hasUpper && hasDigit && hasSpecial) {  // Check if all conditions are met
        std::cout << "Your password is strong.\n";  // Print a message indicating the password is strong
    } else {  // If any condition is not met
        std::cout << "Your password is weak.\n";  // Print a message indicating the password is weak
        return 1;  // Close the program with an error code
    }

    return 0;
    
}
