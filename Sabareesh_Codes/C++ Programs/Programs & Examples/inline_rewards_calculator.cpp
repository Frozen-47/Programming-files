#include <iostream>
using namespace std;
inline int topf(int a) {	return 10*a; }
inline int partf(int b) {	return 90*b; }
int main()
{
	int top,part,n;
	cout<<"Enter No Of Testcase:";
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>top;
		cin>>part;
		cout<<"The Rewards:\n";
		int a=topf(top);
		int b=partf(part);
		cout<<a+b<<endl;
	}
return 0;
}