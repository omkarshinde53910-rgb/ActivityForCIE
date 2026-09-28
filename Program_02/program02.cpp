// Program 02: Protected Member Access
// Aim: Show that a derived class can access a protected base-class member.
#include <iostream>
#include <string>
#include <utility>

class Employee {
protected:
    std::string name;                       // protected: visible to derived classes only
public:
    explicit Employee(std::string employeeName) : name(std::move(employeeName)) {}
};

class Developer : public Employee {
private:
    std::string language;
public:
    Developer(std::string employeeName, std::string programmingLanguage)
        : Employee(std::move(employeeName)), language(std::move(programmingLanguage)) {}
    void display() const {
        std::cout << "Developer: " << name << '\n';   // direct access to protected 'name'
        std::cout << "Language: " << language << '\n';
    }
};

int main() {
    Developer developer("Neha", "C++");
    developer.display();
    // developer.name;  // Error: 'name' is protected, not accessible from main()
    return 0;
}
