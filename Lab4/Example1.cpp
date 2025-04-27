#include <iostream>
#include <string>
using namespace std;

class Book {
    private:
        string title;
        int pages;
    public:
        // Constructor
        Book(string t = "Untitled", int p = 0) : title(t), pages(p) {
            cout << "Constructor: \"" << title << "\" with " << pages << " pages\n";
        }
        // Destructor
        ~Book() {
            cout << "Destructor: \"" << title << "\" destroyed\n";
        }
        // Method to display book info
        void display() const {
            cout << "Title: " << title << ", Pages: " << pages << endl;

        }
};

int main() {
    // Creatte an array of 3 book objects
    Book library[3] = {
        Book("C++ Fundamentals", 300),
        Book("Data Structures", 300),
        Book("Algorithms", 500)
    };
    cout << "\n--- Library Contents ---\n";
    for (int i = 0; i < 3 ; ++i) {
        library[i].display();
    }
    cout << "\n--- End of Program ---\n";
    return 0;
}