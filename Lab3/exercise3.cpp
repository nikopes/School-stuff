#include <iostream>  // Include the basic library
#include <string>  // Include string library

class Car {
    private:
        std::string brand;
        int year;
    public:
        Car(std::string b, int y): brand(b), year(y) {
            std::cout << "Car " << brand << " from " << year << " created." << std::endl;
        }
        ~Car() {
            std::cout << "Car " << brand << " destroyed." << std::endl;
        }
        void showInfo() {
            std::cout << "The car is brand " << brand << " from the year " << year << std::endl;
        }
};

int main() {
    Car* c1 = new Car("Volvo", 1999);
    c1->showInfo();
    delete c1;
    return 0;
}