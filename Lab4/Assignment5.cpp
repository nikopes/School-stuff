#include <iostream>
#include <string>

class Car {
    protected:
        std::string model;
        int year;
        float price;
    public:
        // Constructor to initialize Car class
        Car(std::string m = "Unknown model", int y = 0, float p = 0.0): model(m), year(y), price(p){}

        // Destructor
        virtual ~Car(){}
        
        void inputBasic(){
            std::cout << "Enter model: ";
            std::getline(std::cin, model);
            std::cout << "Enter year: ";
            std::cin >> year;
            std::cin.ignore();
            std::cout << "Enter price: ";
            std::cin >> price;
            std::cin.ignore();
        }
        void displayBasic() const {
            std::cout << "\nModel: " << model;
            std::cout << ", Year: " << year;
            std::cout << ", Price: $" << price;
        }
};

class ElectricCar: public Car{
    private:  
        float battery_size;
    public:
        // Constructor
        ElectricCar(std::string m = "Unknown", int y = 0, float p = 0.0, float b = 0.0)
        : Car(m, y, p), battery_size(b) {}

        // Destructor
        ~ElectricCar() {
            std::cout << "Destroying electric car: " << model << std::endl;
        }

        void input() {
            inputBasic(); // from base class
            std::cout << "Enter battery size (kWh): ";
            std::cin >> battery_size;
            std::cin.ignore();
        }

        void display() const {
            displayBasic(); // from base class
            std::cout << ", Battery size: " << battery_size << " kWh" << std::endl;
        }
};

class GasCar: public Car  {
    private:
        float fuel_capacity;
    public:
        // Constructor
        GasCar(std::string m = "Unknown", int y = 0, float p = 0.0, float f = 0.0)
        : Car(m, y, p), fuel_capacity(f) {}

        // Destructor
        ~GasCar(){
            std::cout << "Destroying gas car: " << model << std::endl;
        }

        void input(){
            inputBasic(); // From base class
            std::cout << "Enter fuel capacity (L): ";
            std::cin >> fuel_capacity;
            std::cin.ignore();
        }

        void display() const {
            displayBasic(); // From base class
            std::cout << ", Fuel capacity: " << fuel_capacity << "L" << std::endl;
        }
};

class HybridCar: public Car{
    private:
        float battery_size;
        float fuel_capacity;
    public:
        // Constructor
        HybridCar(std::string m = "Unknown", int y = 0, float p = 0.0, float b = 0.0, float f = 0.0)
        : Car(m, y, p), battery_size(b), fuel_capacity(f) {}

        // Destructor 
        ~HybridCar(){
            std::cout << "Destroying hybrid car: " << model << std::endl;
        }

        void input(){
            inputBasic(); // From base class
            std::cout << "Enter battery size (kWh): ";
            std::cin >> battery_size;
            std::cin.ignore();
            std::cout << "Enter fuel capacity (L): ";
            std::cin >> fuel_capacity;
            std::cin.ignore();
        }

        void display() const {
            displayBasic(); // From base class
            std::cout << ", Battery size: " << battery_size << "kWh";
            std::cout << ", Fuel capacity: " << fuel_capacity << "L" << std::endl;
        }
};


int main() {
    int size = 0;
    std::cout << "How many cars would you like to enter? ";
    std::cin >> size;
    std::cin.ignore();

    Car** cars = new Car*[size];    // dynamic array of Car* pointers
    int* carTypes = new int[size];  // array to store type (1 = Electric, 2 = Gas, 3 = Hybrid)

    for (int i = 0; i < size; ++i) {
        int type = 0;
        std::cout << "\nEnter type of car #" << (i + 1) << " (1 = Electric, 2 = Gas, 3 = Hybrid): ";
        std::cin >> type;
        std::cin.ignore();
        carTypes[i] = type;

        if (type == 1) {
            ElectricCar* ec = new ElectricCar();
            ec->input();
            cars[i] = ec;
        } 
        else if (type == 2) {
            GasCar* gc = new GasCar();
            gc->input();
            cars[i] = gc;
        } 
        else if (type == 3) {
            HybridCar* hc = new HybridCar();
            hc->input();
            cars[i] = hc;
        } 
        else {
            std::cout << "Invalid type! Defaulting to ElectricCar." << std::endl;
            ElectricCar* ec = new ElectricCar();
            ec->input();
            cars[i] = ec;
            carTypes[i] = 1;
        }
    }

    std::cout << "\n--- Fleet Information ---\n";
    for (int i = 0; i < size; ++i) {
        if (carTypes[i] == 1) {
            static_cast<ElectricCar*>(cars[i])->display();
        } 
        else if (carTypes[i] == 2) {
            static_cast<GasCar*>(cars[i])->display();
        } 
        else if (carTypes[i] == 3) {
            static_cast<HybridCar*>(cars[i])->display();
        }
    }

    std::cout << "\n--- Cleaning up fleet ---" << std::endl;

    for (int i = 0; i < size; ++i) {
        delete cars[i]; // Destructor will print "Destroying ..."
    }

    delete[] cars;
    delete[] carTypes;

    return 0;
}
    