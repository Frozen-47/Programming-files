#include <iostream>
using namespace std;

class student {
    char grade;
    string name, cls;
    int roll, mark[4], tot = 0;

public:
    void input() {
        cout << "Enter the Name of the student: ";
       
        getline(cin, name);

        cout << "Enter the Class of the student: ";
        getline(cin, cls);

        cout << "Enter the Roll no of the student: ";
        cin >> roll;

        cout << "Enter the marks of the student one by one:" << endl;
        for (int i = 0; i < 4; i++) {
            cin >> mark[i];
            tot += mark[i];
        }
    }

    void validate() {
        if (tot >= 350) {
            grade = 'A';
        } else if (tot >= 300) {
            grade = 'B';
        } else if (tot >= 200) {
            grade = 'C';
        } else {
            grade = 'D';
        }
    }

    void output() {
    cout << "\n\n";
    cout << "*************************" << endl;
    cout << "*Name       : " << name << " *" << endl;
    cout << "*Class      : " << cls << "\t*" << endl;
    cout << "*Roll No.   : " << roll << "\t*" << endl;
    cout << "*-----------------------*" << endl;
    cout << "*Total Marks: " << tot << "/400\t*" << endl;
    cout << "*Grade      : " << grade << "\t\t*" << endl;
    cout << "*************************" << endl;
}

};

int main() {
    student s1;
    s1.input();
    s1.validate();
    s1.output();
    return 0;
}
