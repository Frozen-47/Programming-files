#include <iostream>
#include <cstring>
using namespace std;

class STRING {
private:
    char str[100];

public:
    void getString() {
        cout << "Enter string: ";
        cin >> str;
    }

    void display() { cout << "String: " << str << endl; }

    STRING operator+(STRING obj) { 
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, obj.str);
        return temp;
    }

    bool operator==(STRING obj) {
        return strcmp(str, obj.str) == 0;
    }
};

int main() {
    STRING s1, s2, s3;
    s1.getString();
    s2.getString();
    
    s3 = s1 + s2;
    cout << "Concatenated: ";
    s3.display();

    if (s1 == s2)
        cout << "Strings are equal.\n";
    else
        cout << "Strings are not equal.\n";
    
    return 0;
}
