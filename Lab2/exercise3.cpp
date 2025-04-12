#include <iostream>  // Include the basic library

int main(){
    
    // Declare variables
    double a = 0;
    double b = 0;
    char c;
    double result = 0;
    
    // User input
    std::cout << "Please give a number: ";
    std::cin >> a;
    std::cout << "Another number: ";
    std::cin >> b;
    std::cout << "What calculation you want to perform? Answer with + - * or /: ";
    std::cin >> c;
    
    // Perform the user input corresponding calculation
    if (c == '+' || c == '-' || c == '*' || c == '/'){
        switch (c) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b == 0){
                    std::cout << "Can't divide by 0.";
                    return 1;
                }
                else {
                    result = a / b;
                    break;
                }
        }
        std::cout << a << " " << c << " " << b << " = " << result << std::endl;  // Display the solution
        return 0;
    }
    else {  // If user puts anything else than + - * / as c input
        std::cout << "Invalid input.";
        return 1;
    }
}