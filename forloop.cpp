#include <iostream>  // Include the iostream library
#define max 50       // Define the maximum value macro

using namespace std;  // Use the standard namespace

// Main function
int main(){
    for (unsigned short i = 2; i <= max; i += 2){  // Loop through numbers from 2 to 50 with a step of 2
        cout << i << " ";  // Print the current number and a space
    }
    return 0;  // Return 0 to indicate successful completion of the program
}