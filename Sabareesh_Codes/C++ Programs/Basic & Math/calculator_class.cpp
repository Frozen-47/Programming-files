#include <iostream>
using namespace std;
class calc {
public:
	int a,b;
	void getinput() {
		cout<<"Enter first number: ";
		cin>>a;
		cout<<"Enter second number: ";
		cin>>b;
	}
	void add() {
		cout<<"\nThe Sum of the two numbers is :"<<a+b<<endl;
	}


	void sub() {
		cout<<"\nThe difference between the two numbers is:"<<a-b<<endl;
	}


	void mul() {
		cout<<"\nThe Product of the two numbers is :"<<a*b<<endl;
	}


	void divi() {
		if (b == 0) {
			cout << "\nDivision by zero is not allowed." << endl;
		} else {
			cout << "\nThe quotient is: " << a / b << endl;
		}
	}
	void mod() {
		cout<<"\nThe Remainder of the two numbers is :"<<a%b<<endl;
	}

};

int main()
{
	char opr;
	calc calcopr;
	cout<<"Enter the operation : ";
	cin>>opr;
	cout<<endl;
	calcopr.getinput();
	switch(opr) {
	case '+':
	calcopr.add();
		break;
	case '-':
		calcopr.sub();
		break;
	case '*':
	calcopr.mul();
		break;
	case '/':
		calcopr.divi();
		break;
	case '%':
	calcopr.mod();
		break;


	}

	return 0;
}