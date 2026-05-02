#include<stdio.h>

void main(){
    int cel;
    float far;
    
    printf("enter cel:");
    scanf("%d",&cel);
    
    far=((float)cel*9/5)+32;
    
    printf("the fahrenheit is:%.2f",far);
    
}