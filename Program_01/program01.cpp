// Program 01: Basic Single Inheritance
// Aim: Implement single inheritance using Person (base) and Student (derived).
#include <iostream>
#include <string>
#include <utility>

class Person {
protected:
    std::string name;                       // accessible in derived classes
public:
    explicit Person(std::string personName) : name(std::move(personName)) {}
    void displayName() const {
        std::cout << "Name: " << name << '\n';
    }
};

// Student "is-a" Person (public inheritance)
class Student : public Person {
private:
    int rollNumber;
public:
    Student(std::string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll) {}
    void displayStudent() const {
        displayName();                      // inherited from Person
        std::cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {
    Student student("Amit", 101);
    student.displayStudent();
    return 0;
}
