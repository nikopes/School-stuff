#include <iostream>  // Include the basic library
#include <cstring>  // Include string library   

// Create the class vehicle
class Vehicle {
    protected:
        std::string brand;
        int year;
    public:
        Vehicle(std::string b, int y): brand(b), year(y) {}  // Base constructor
        void showInfo() {
            std::cout << "\nBrand: " << brand << "\nYear: " << year << std::endl;
        }
        void startEngine() {
            std::cout << "Starting the engine of the vehicle." << std::endl;
        }
};

// Create the derived class Car
class Car : public Vehicle {
    private:
        int numDoors;
    public:
        Car() : Vehicle("Unknown", 0), numDoors(0) {}  // Default constructor for Car class
        Car(std::string b, int y, int n) : Vehicle(b, y), numDoors(n) {}  // New constructor that calls the base constructor 
        // Override showInfo
        void showInfo() {
            std::cout << "\nBrand: " << brand << "\nYear: " << year << "\nNumber of doors: " << numDoors << std::endl;
        }
        // Override startEngine
        void startEngine() {
            std::cout << "Car engine is starting!" << std::endl;
        }
        // Getter to access numDoors from ElectricCar class
        int getNumDoors() {
            return numDoors;
        }
};

// Create the class to inherit from class Car
class ElectricCar : public Car {
    private:
        int batteryCapacity;
    public:
        ElectricCar() {
            batteryCapacity = 0;
        }
        ElectricCar(std::string b, int y, int n, int c) : Car(b, y, n), batteryCapacity(c) {}
        // Override showInfo again
        void showInfo() {
            std::cout << "\nBrand: " << brand << "\nYear: " << year << std::endl;
            std::cout << "Number of doors: " << getNumDoors() << "\nBattery capacity: " << batteryCapacity << "kWh" << std::endl;
        }
        // Override startEngine again
        void startEngine() {
            std::cout << "Electric engine is starting... Silent but powerful!" << std::endl;
        }
};

int main() {
    Vehicle* v1 = new Vehicle("Volvo", 1999);  // Set vehicle class
    Car* c1 = new Car("Nissan", 2015, 4);  // Set the derived Car class
    ElectricCar* e1 = new ElectricCar("Tesla", 2020, 4, 45);  // Set the derived ElectricCar class
    ElectricCar* eCar = new ElectricCar("Nissan", 2022, 4, 40);

    v1->showInfo();  // Call the showInfo from Vehicle class
    v1->startEngine();
    c1->showInfo();  // Call the overridden showInfo from Car class
    c1->startEngine();
    e1->showInfo();  // Call the overridden showInfo from ElectricCar class
    e1->startEngine();
    eCar->showInfo();
    eCar->startEngine();

    // Delete info to make space
    delete v1;
    delete c1;
    delete e1;
    delete eCar;
    return 0;
}
