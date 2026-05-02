#include<stdio.h>
int main(){
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);
    if(a%4==0||a%3==0){printf("TRUE.");}
    else{printf("FALSE.");}
    return 0;
}