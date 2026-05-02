#include<stdio.h>  
int main()    
{    
 int i,square,number,sum;    
  printf("ENTER A NUMBER: ");    
  scanf("%d",&number);
  printf("THE SQUARE OF NUMBERS BETWEEN THE GIVEN NUMBERS ARE:");
  sum=0;
  for(i=1;i<=number;i++){
      square=i*i;
      printf("%d ",square);
     sum+=square; 
    
  }  
  printf("\nTHE SUM OF THE SQUARE NUMBERS IS:%d",sum);
return 0;  
}   