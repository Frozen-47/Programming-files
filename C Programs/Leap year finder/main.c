#include<stdio.h>
int main(){
    int a;
    printf("ENTER A YEAR:");
    scanf("%d",&a);
    if(a%4==0){printf("THE YEAR IS LEAP YEAR.");}
    else{printf("THE YEAR IS NOT LEAP YEAR.");}
    return 0;
}