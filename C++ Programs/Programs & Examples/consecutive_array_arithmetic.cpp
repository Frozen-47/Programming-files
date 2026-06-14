#include <iostream>
using namespace std;
void calc(int a,int b) {
	cout<<a-b<<" "<<a/b<<endl;
}
int main()
{
	int n,arr[100];
	cin>>n;
	for(int i=0; i<n*n; i++) {
		cin>>arr[i];
	}
	cout<<"Output :\n";
	for(int i=0; i<(n*n); i++) {
		calc(arr[i],arr[i+1]);
		i++;
	}
	return 0;
}