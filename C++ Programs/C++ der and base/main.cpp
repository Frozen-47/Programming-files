#include <iostream>
using namespace std;

class BC {  // Base Class
public:
    int b;
    virtual void show() {  // Virtual function for correct function overriding
        cout << "b = " << b << "\n";
    }
};

class DC : public BC {  // Derived Class
public:
    int d;
    void show() override {  // Overriding show() function
        cout << "b = " << b << "\n";
        cout << "d = " << d << "\n";
    }
};

int main() {
    BC *bptr;  // Base class pointer
    BC base;
    bptr = &base;  // Pointing to base class object
    bptr->b = 100;
    cout << "bptr points to base object:\n";
    bptr->show();  // Calls BC::show()

    DC derived;  // Derived class object
    bptr = &derived;  // Base pointer points to derived class object
    bptr->b = 200;
    
    
    cout << "bptr now points to derived object:\n";
    bptr->show();  // Calls DC::show() because of virtual function

    // Using derived class pointer
    DC *dptr;
    dptr = &derived;
    dptr->d = 300;  // Accessing d using derived class pointer
    cout << "dptr is derived type pointer:\n";
    dptr->show();  // Calls DC::show()

    return 0;
}
