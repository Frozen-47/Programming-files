#include<stdio.h>
#include<math.h>
int main(){
    float x,c;
    int n;
    printf("Enter a number : ");
    scanf("%f",&x);
    printf("Enter how many time do you want to multiply : ");
    scanf("%d",&n);
    c=pow(x,n);
    printf("RESULT x^n : %f",c);
    return 0;
    
}