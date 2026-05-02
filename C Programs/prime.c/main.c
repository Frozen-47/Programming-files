#include<stdio.h>
void main(){
    int i,j,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=2;j<=i;j++){
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }
}