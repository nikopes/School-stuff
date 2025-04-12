#include <iostream>  // Include the basic library
#include <cstring>  // Include string library

const int MAX_STUDENTS = 100;

// Store student's name, ID and grade
struct Student {
    char name[50];
    int id;
    float grade;
};

int main() {
    
    // Declare variables
    int input;
    int student_count = 0;

    Student students[MAX_STUDENTS];  // Create an array for multiple student records

    while(1) {

        // User input 
        std::cout << "\nMenu:\n";
        std::cout << "1 Add student\n";
        std::cout << "2 View all students\n";
        std::cout << "3 Search student with ID number\n";
        std::cout << "4 Exit\n";
        std::cout << "Select an option with a number (1-4): ";
        std::cin >> input;
        
        // If else for user input
        if ((input == 1) || (input == 2) || (input == 3) || (input == 4)) {
            switch (input){  // Switch for different cases
                case 1:
                    Student s;
                    std::cout << "Enter student name: ";
                    std::cin.ignore(); // Clear newline from input buffer
                    std::cin.getline(s.name, 50);
                    std::cout << "Add the student number: ";
                    std::cin >> s.id;
                    std::cout << "Add the student grade: ";
                    std::cin >> s.grade;
                    students[student_count++] = s;
                    std::cout << "Student added succesfully!\n";
                    break;
                case 2:
                    if (student_count == 0) {
                        std::cout << "No students to display.\n";
                    } 
                    else {
                        std::cout << "\nAll Students:\n";
                        for (int i = 0; i < student_count; ++i) {
                            std::cout << "Name: " << students[i].name
                                      << "\nID: " << students[i].id
                                      << "\nGrade: " << students[i].grade << "\n";
                        }
                    }
                    break;
                case 3: {
                    int search_id;
                    bool found = false;
                    std::cout << "Enter student ID to search: ";
                    std::cin >> search_id;
                    
                    for (int i = 0; i < student_count; ++i) {
                        if (students[i].id == search_id) {
                            std::cout << "Student Found:\n";
                            std::cout << "Name: " << students[i].name
                                      << "\nID: " << students[i].id
                                      << "\nGrade: " << students[i].grade << "\n";
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        std::cout << "Student with ID " << search_id << " not found.\n";
                    }
                    break;
                }    
                case 4:
                    std::cout << "Goodbye!\n";
                    return 0 ;
                }
        }
        else {  // If user input is something else
            std::cout << "Invalid input!";
            return 1;  
        }

    }

}