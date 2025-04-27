#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // clears the leftover newline

    cout << "Enter your full name: ";
    getline(cin, name);  // works correctly now

    cout << "Age: " << age << ", Name: " << name << endl;
}