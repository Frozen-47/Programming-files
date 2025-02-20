#include <stdio.h>

int main()
{
    int a,b,c;
    printf("ENTER FIRST NUMBER : ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER : ");
    scanf("%d",&b);
    printf("ENTER THIRD NUMBER : ");
    scanf("%d",&c);
    if(a>=c||a>=b){
        printf("FIRST NUMBER IS GREATER AMONG THREE");
    }
    else if(b>=c||b>=c){
        printf("SECOND NUMBER IS GREATER AMONG THREE");
    }
    else {
        printf("THIRD NUMBER IS GREATER AMONG THREE");
    }
    
    return 0;
}
