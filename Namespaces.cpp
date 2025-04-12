// Include the necessary libraries
#include <iostream>
#include <string>

using namespace std;  // Use the standard namespace

// Create a namespace for math operations
namespace MathOperations {
    int add(int x, int y) {
        return x + y;
    }
}

// Create a namespace for text operations
namespace TextOperations {
    string concat(string a, string b) {
        return a + b;
    }
}


int main() {

    using namespace MathOperations; // Use the MathOperations namespace
    using namespace TextOperations; // Use the TextOperations namespace

    int x, y;   // Declare integer variables for the numbers to be added
    string a, b;   // Declare string variables for the words to be concatenated

    cout << "Please give number x: ";  // Ask the user for an input
    cin >> x;                          // Get the input from the user
    cout << "Please give number y: ";  // Ask the user for another input
    cin >> y;             // Get the input from the user
    cout << "The sum of x and y is: " << add(x, y) << "\n";  // Print the sum of x and y

    cout << "Please give a word: ";  // Ask the user for an input
    cin >> a;                        // Get the input from the user
    cout << "Please give another word: ";  // Ask the user for another input
    cin >> b;                              // Get the input from the user
    cout << "You said: " << concat(a, b) << "\n";   // Print the concatenated string
    return 0;   // Return 0 to indicate successful completion of the program
}