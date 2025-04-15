#include <iostream>  // Include the basic library
#include <string>  // Include string library

class Student {
    private:
        std::string name;
        int age;
        char grade;
        std::string group = "2025 group";
    
    public:
        // Setter methods
        void setName(std::string n) {
            name = n;
        }
        void setAge(int a) {
            age = a;
        }
        void setGrade (char g) {
            grade = g;
        }
        // Getter methots
        std::string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        char getGrade() {
            return grade;
        }
        void displayInfo() {
            std::cout << "Student name: " << getName() << std::endl;
            std::cout << "Studeng age: " << getAge() << std::endl;
            std::cout << "Student grade: " << getGrade() << std::endl;
        }
};

int main() {
    Student s1;
    s1.setName("Niko Salmelainen");
    s1.setAge(33);
    s1.setGrade('5');
    s1.displayInfo();
    return 0;
}