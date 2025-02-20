#include<stdio.h>
#include<math.h>
void main()
{
	int a[10],n,sum=0,sum1=0,i;
	float avg,var,sd;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("\nEnter the values one by one : ");
	for(i=1; i<=n; i++)
	{
		printf("\nEnter element %d:",i);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/n;
	for(i=1; i<=n; i++)
	{
		sum1+=pow((a[i]-avg),2);
	}
	var=sum1/n;
	sd=sqrt(var);
	printf("\n Sum of given n numbers is=%d",sum);
	printf("\n Average of given n numbers is=%f",avg);
	printf("\n Standard deviation of given n numbers is=%f",sd);
}
