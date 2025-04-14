#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a[10],b[10];
	int n,i,sum=0,count=0;
	float avg;
	cout<<"Enter No of Subjects:";
	cin>>n;
	for(i=0; i<n; i++) {
		cin>>a[i];
		sum+=a[i];
	}
	avg=sum/n;
	for(i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i]>a[j]) {
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0; i<n; i++) {
		if(a[i]<50) {
			count++;
		}
	}
	for(i=0; i<count; i++) {
		if(a[i]<50) {
			b[i]=a[i];
		}
	}
	cout<<"Highest Mark:"<<a[n-1]<<endl;
	cout<<"Lowest Mark:";
	if(count!=0) {
		for(i=0; i<count; i++)
			cout<<"\n\t"<<b[i];
	}
	else
		cout<<"\tAll Marks are Greater than 50!!!";
	cout<<"\nAverage Mark:"<<fixed<<setprecision(2)<<avg<<endl;
	return 0;
}