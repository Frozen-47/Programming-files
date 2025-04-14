#include<iostream>
using namespace std;
class stack {
private:
	int top;
	int arr[5];
public:
	stack() {
		top=-1;
	}
	void push(int val) {
		if(top>=4) {
			cout<<"Stack is FULL\n";
		}
		else {
			arr[++top]=val;
			cout<<arr[top]<< " Has been upoaded\n";
		}

	}
	void pop() {
		if(top<0) {
			cout<<"Stack is underflow";
		}
		else {
			cout<<arr[top--]<<" Has been removed\n";
		}

	}
	void display() {
		if(top<0) {
			cout<<"Stack is EMPTY\n";
		}
		else {
			for(int i=top; i>=0; i--) {
				cout<<"Element: ["<<arr[i]<<"]\n";
			}
		}

	}
};
int main() {
	stack s;
	int n,a;
	cout<<"Operation:\n1.push\n2.pop\n3.display\n4.exit\n";
	do {
		cout<<"\nEnter the Operation:";
		cin>>n;

		switch (n)
		{
		case 1:
			cout<<"Enter the value to push:";
			cin>>a;
			s.push(a);
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.display();
			break;
		case 4:
			cout<<"Program has been completed";
			exit (0);
			break;
		default:
			cout<<"Enter the valid input";
		}
	} while(n<=4);
	return 0;
}