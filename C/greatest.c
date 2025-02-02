#include<stdio.h>

void main(){
    int a,b,c;
     printf("enter a:");
     scanf("%d",&a);
     
     printf("enter b:");
     scanf("%d",&b);
     
     printf("enter c:");
     scanf("%d",&c);
     
    if(a>=b&&a>=c){
        printf("a is greater");
    }else if(b>=a&&b>c){
        printf("b is greater");
    }else{
        printf("c is greater"); 
    }    
        
}