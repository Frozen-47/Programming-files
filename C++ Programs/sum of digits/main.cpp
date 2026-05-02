#include <iostream>
using namespace std;

class sumofdigit {
private:
    int num, sum;

public:
    sumofdigit(int n) {
        num = n;
        sum = 0;
    }

    void calculatesum() {
        while (num >= 10) {
            sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
    }

    void display() {
        cout << "Final Single Digit Sum: " << num << endl;
    }

    ~sumofdigit() {
        cout << "Object destroyed\n";
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    sumofdigit obj(num);
    obj.calculatesum();
    obj.display();
    return 0;
}
