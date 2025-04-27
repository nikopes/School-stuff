#include <iostream>
#include <string>

// Define the car class
class Car {
private:
    std::string model;
    int year;
    int price;

public:
    // Constructor to initialize Car class
    Car(std::string m = "Unknown model", int y = 0, int p = 0)
        : model(m), year(y), price(p) {
            std::cout << "Car constructor: " << model << "(" << year << ")" << " - $" << price << std::endl; 
        }

    // Destructor
    ~Car() {
        std::cout << "Car destructor: " << model << " destroyed" << std::endl;
    }

    void displayCar() const {
        std::cout << "\nModel: " << model
                  << "\nYear: " << year
                  << "\nPrice: $" << price << std::endl;
    }
};

// Define the car collection class
class CarCollection {
private:
    Car** cars; // Array of pointers to the car
    int size;

public:
    CarCollection() {
        std::cout << "How many cars do you want to create? ";
        std::cin >> size;
        std::cin.ignore(); // Clear newline from buffer

        cars = new Car*[size];

        for (int i = 0; i < size; ++i) {
            std::string model;
            int year, price;

            std::cout << "\nEnter model for car " << i + 1 << ": ";
            std::getline(std::cin, model);

            std::cout << "Enter year: ";
            std::cin >> year;

            std::cout << "Enter price: ";
            std::cin >> price;

            std::cin.ignore(); // clear newline before next getline

            cars[i] = new Car(model, year, price);
        }
    }

    void displayCars() const {
        std::cout << "Car collection initialized with " << size << " cars." << std::endl;
        std::cout << "\n--- Car Collection ---";
        for (int i = 0; i < size; ++i) {
            std::cout << "\nCar " << i + 1 << ":";
            cars[i]->displayCar();
        }
    }

    ~CarCollection() {
        for (int i = 0; i < size; ++i) {
            delete cars[i]; // Destroy each Car
        }
        delete[] cars;
        std::cout << "\nCarCollection destroyed." << std::endl;
    }
};

int main() {
    CarCollection* car = new CarCollection();
    car->displayCars();

    delete car;

    std::cout << "\n--- End of Program ---\n";
    return 0;
}