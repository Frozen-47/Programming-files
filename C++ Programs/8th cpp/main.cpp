#include<iostream>
using namespace std;
class B;
class A {
private:
	int a;
	float b;
public:
	void get() {
		cout<<"Enter a integer value of A:";
		cin>>a;
		cout<<"Enter a float value of A:";
		cin>>b;
	}
	void display() {
		cout<<"Class A\n";
		cout<<"========\n";
		cout<<"Integer value:"<<a<<endl;
		cout<<"Float value:"<<b<<endl;
	}
	friend void sum(A ob1,B ob2);
};
class B {
private:
	int x;
	float y;
public:
	void get() {
		cout<<"\nEnter a integer value of B:";
		cin>>x;
		cout<<"Enter a float value of B:";
		cin>>y;
	}
	void display() {
		cout<<"Class B\n";
		cout<<"========\n";
		cout<<"Integer value:"<<x<<endl;
		cout<<"Float value:"<<y<<endl;
	}
	friend void sum(A ob1,B ob2);
};
void sum(A ob1,B ob2) {
	cout<<"\nFriend Function:\n";
	cout<<"=================\n";
	cout<<"Sum of the Integers in both classes:"<<ob1.a+ob2.x<<endl;
	cout<<"Sum of the Floats in both classes:"<<ob1.b+ob2.y;
}
int main() {
	A A1;
	B B1;
	A1.get();
	B1.get();
	A1.display();
	B1.display();
	sum(A1,B1);
	return 0;
}





















