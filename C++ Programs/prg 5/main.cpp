#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Number A: ";
	cin>>a;
	cout<<"Enter Number B: ";
	cin>>b;
	cout<<"Enter Number C: ";
	cin>>c;
	if(a==b && b==c) {
		cout<<"Three numbers are equal";
	}
	else {
		if(a>=b && a>=c)
			cout<<"A is greatest number";
		else if(a>=b && a>=c)
			cout<<"B is greatest number";
		else
			cout<<"C is greatest number";
	}
	return 0;
}