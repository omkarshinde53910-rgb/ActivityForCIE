// Program 07: Resolving Multiple-Inheritance Ambiguity
// Aim: Use the scope-resolution operator when two bases have the same method name.
#include <iostream>

class Academic {
public:
    void display() const {
        std::cout << "Academic information\n";
    }
};

class Sports {
public:
    void display() const {
        std::cout << "Sports information\n";
    }
};

class Student : public Academic, public Sports {
public:
    void displayAll() const {
        Academic::display();                // explicitly choose the base
        Sports::display();
    }
};

int main() {
    Student student;
    // student.display();                   // Error: ambiguous call
    student.Academic::display();
    student.Sports::display();
    student.displayAll();
    return 0;
}
