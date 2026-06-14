#include <iostream>
using namespace std;
void swap(int &a, int &b) {
	int t;
	t=a;
	a=b;
	b=t;
}

int main()
{
	int x,y;
	cout<<"Enter first Number :";
	cin>>x;
	cout<<"Enter second Number :";
	cin>>y;
	swap(x,y);
	cout<<"\nAfter Swap\n\n";
	cout<<"The first Number :"<<x<<endl;
	cout<<"The Second Number :"<<y<<endl;
	return 0;
}