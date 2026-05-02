#include <stdio.h>
 int main()
 {
 int value,total = 0,count = 0;
 printf("Enter the value:");
 scanf("%d",&value);
 while (value != scanf("%i", &value)) { 
 total = total + value;
 count = count + 1;
 } 
 printf("Average of the %i numbers = %f \n",count,total/(float)count);
 return 0;
 }