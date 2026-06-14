#include <stdio.h>
int fact(int a) {
    int b=1;
	for(int i=1; i<=a; i++) {
		b=b*i;
	}
	return b;
}
int main()
{
	int a,c;
	printf("Enter a number : ");
	scanf("%d",&a);
	c=fact(a);
	printf("%d",c);
	    return 0;
}