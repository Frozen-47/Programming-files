#include <iostream>
using namespace std;

class Car {
public:
    
    Car() {
        cout << "Car object created!" << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car object destroyed!" << endl;
    }
};

int main() {
    Car myCar;  // Constructor is called
    cout << "Inside main function" << endl;
    return 0;  // Destructor is called automatically
}
