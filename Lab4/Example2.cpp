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
            cout << "Destructor: \"" << title << "\" destroyerd\n";
        }
        // Method to display book info
        void display() const {
            cout << "Title: " << title << ", Pages: " << pages << endl;

        }
};

class BookShelf {
    private:
        Book* books;  // Pointer to Book array
        int size;
    public:
        // Constractor: dynamically create array and initialize it
        BookShelf() {
            size = 3;
            books = new Book[size]{
                Book("C++ Fundamentals", 300),
                Book("Data Stuctures", 450),
                Book("Algorithms", 500)
            };
            cout << "Bookshelf constructor: Shelf initialized with " << size << " books\n";
        }
        // Destructor: clean up heap memory
        ~BookShelf() {
            delete[] books;
            cout << "Bookshelf destructor: Shelf destroyed\n";
        }
        void displayBooks() const {
            cout << "\nBooks on shelf:\n";
            for (int i = 0; i < size; ++i) {
                books[i].display();
            }
        }
};

int main() {
    BookShelf* shelf = new BookShelf();  // Created on heap
    shelf->displayBooks();

    delete shelf;  // cleanup
    cout << "\n--- End of Program ---\n";
    return 0;
}