#include <iostream>  // Include the basic library

int main() {

    // Declare array of numbers
    int array[5] = {1, 4, 7, 10, 15};
    int new_array[5];
    
    // Pointer to the original array
    int* ptr = array;

    // Show the original array
    std::cout << "The original array is: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";

    // Traverse using pointer and copy to new_array
    for (int i = 0; i < 5; ++i) {
        new_array[i] = *(ptr + (4 - i));  // Reverse index
    }

    // Print the new array
    std::cout << "Elements in new_array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << new_array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}