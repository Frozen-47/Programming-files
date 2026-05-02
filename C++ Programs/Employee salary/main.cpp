#include<iostream>
using namespace std;
class employee {
	string name,id;
	int per;
	float salary;
public:
	void input() {
		cout << "Enter the Name of the Employee: ";
		getline(cin, name);
		cout << "Enter the ID of the Employee: ";
		getline(cin, id);
		cout << "Enter the Work Percentage of the Employee: ";
		cin>>per;
		cin.ignore();
	}
	void validate() {
		if (per >= 95) {
			salary = 210000;
		}
		else if (per >= 85&& per <95) {
			salary = 190000;
		}
		else if (per >= 75&& per <85) {
			salary = 160000;
		}
		else if (per >= 65&& per <75) {
			salary = 130000;
		}
		else if (per >= 45&& per <65) {
			salary = 100000;
		}
		else if (per >= 25&& per <45) {
			salary = 60000;
		}
		else {
			salary = 30000;
		}

	}
  void output() {
        cout << "\n\nEmployee Details:\n";
        cout << "------------------------\n";
        cout << "Employee Name   : " << name << endl;
        cout << "Employee ID     : " << id << endl;
        cout << "Work Percentage : " << per << "%" << endl;
        cout << "Employee Salary : $" << salary<<".00" << endl;
    }
};
int main() {

	employee e1;
	e1.input();
	e1.validate();
	e1.output();
	return 0;
}
