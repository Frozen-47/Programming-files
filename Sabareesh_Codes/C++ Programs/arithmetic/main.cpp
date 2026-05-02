#include<iostream>
using namespace std;
class Arithmetic {
private:
	float num1;
	int num2;
public:
	void getvalue(float a,int b) {
		num1=a;
		num2=b;
	}
	void add() {
		cout<<"Addition:"<<num1+num2<<endl;
	}
	void sub() {
		cout<<"Subtraction:"<<num1-num2<<endl;
	}
	void mul() {
		cout<<"Multiplication:"<<num1+num2<<endl;
	}
	void div() {
		if (num2!=0) {
			cout<<"Division:"<<num1/num2<<endl;
		}
		else {
			cout<<"Zero is not allowed";
		}
	}
	void display() {
		cout<<"Float:"<<num1<<"\tInteger:"<<num2<<endl<<endl<<endl;
	}
};
int main() {
	Arithmetic o;
	o.getvalue(1.7,5);
	o.display();
	o.add();
	o.sub();
	o.mul();
	o.div();
	return 0;
}