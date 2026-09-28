// Program 03: Public versus Private Inheritance
// Aim: Observe the effect of inheritance mode on accessibility.
#include <iostream>

class Base {
public:
    void show() const {
        std::cout << "Base public function\n";
    }
};

// Public inheritance: show() stays public
class PublicDerived : public Base {
};

// Private inheritance: show() becomes private inside PrivateDerived
class PrivateDerived : private Base {
public:
    void callBaseShow() const {
        show();                             // allowed inside the class
    }
};

int main() {
    PublicDerived publicObject;
    publicObject.show();                    // OK

    PrivateDerived privateObject;
    privateObject.callBaseShow();           // OK (through a public wrapper)
    // privateObject.show();                // Error: show() is private via private inheritance
    return 0;
}
