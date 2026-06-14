#include<stdio.h>
int main(){
    int a,n=0,r=0,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    b=a;
    while(a!=0){
        n=a%10;
        r=r*10+n;
        a=a/10;
    }
    if(b==r){
        printf("The number %d is panindrome",b);
    }
    else{
        printf("The number %d is not panindrome",b);
    }
    return 0;
}