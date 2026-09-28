// Program 08: Constructor and Destructor Order
// Aim: Observe the order of construction and destruction in inheritance.
#include <iostream>

class Base {
public:
    Base()  { std::cout << "Base constructor\n"; }
    ~Base() { std::cout << "Base destructor\n"; }
};

class Derived : public Base {
public:
    Derived()  { std::cout << "Derived constructor\n"; }
    ~Derived() { std::cout << "Derived destructor\n"; }
};

int main() {
    Derived object;   // Creation: Base -> Derived; Destruction: Derived -> Base
    return 0;
}
