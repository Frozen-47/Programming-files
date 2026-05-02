#include<stdio.h>  
int main()    
{    
 int i,fact,number;    
  printf("ENTER A NUMBER: ");    
  scanf("%d",&number); 
  fact=1;
    for(i=1;i<=number;i+=1){    
      fact=fact*i;    
  }    
  printf("FACTORIAL IS: %d",fact);    
return 0;  
}   