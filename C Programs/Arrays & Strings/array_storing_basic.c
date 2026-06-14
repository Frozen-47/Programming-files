#include<stdio.h>
int main() {
	int n,i,b;
	printf("Enter how many element do you want : ");
	scanf("%d",&n);
	int arr[n];
	for (i=0; i<n; i++)
	{	printf("Element %d :",i);
		scanf("%d",&arr[i]);
	}

	for (i=0; i<n; i++) {
		printf("%d ",arr[i]);
	}
	return 0;



}