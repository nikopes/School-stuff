#include <iostream>  // Include the basic library
#include <cstring>  // Include string library

class Book {

    private:
        std::string title = "Basics of C++";
        int pages = 145;
        std::string author = "Niko Salmelainen";

    protected:
        float price = 19.99;

    public:
    std::string publisher;

    void displayInfo() {
        std::cout << "The author of the book is: " << author << std::endl;
    }
};

int main() {
    Book B1;
    B1.publisher = "Metropolia UAS";
    std::cout << "The publisher of the book is: " << B1.publisher << std::endl;
    B1.displayInfo();
}