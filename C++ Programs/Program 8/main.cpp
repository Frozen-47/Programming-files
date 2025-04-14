#include <iostream>
using namespace std;
void calc(int a,int b) {
	
	cout<<a*b<<endl;
}
int main()
{
	int n,arr[100];
	cin>>n;
	int n2=n*2;
	for(int i=0; i<n2; i++) {
		cin>>arr[i];
	}
	cout<<endl;
	for(int i=0; i<n2; i+=2) {
		calc(arr[i],arr[i+1]);
	
}
return 0;
}