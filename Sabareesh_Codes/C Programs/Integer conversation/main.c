#include<stdio.h>
int main(){
    float a;
    double c;
    scanf("%f",&a);
    c=(int)(a*100)/100.0;
    printf("%.2lf",c);
    return 0;
}