#include <iostream>  // Include the basic library

int main() {

    int a = 100;
    int& refA = a; // Reference to a

    std::cout << "Value of a: " << refA << std::endl;

    refA = 30; // Modifying refA modifies a

    std::cout << "Value of a after modifying reference: " << refA << std::endl;

}