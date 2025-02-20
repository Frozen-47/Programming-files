#include <stdio.h>

int main()
{
    int count,even,sum;
    printf("ENTER A NUMBER:");
    scanf("%d",&count);
    printf("THE EVEN NUMBERS ARE:");
    for(even=0;even<=count;even+=2){
        printf("%d\n",even);
        sum+=even;
    }
    
    printf("THE SUM IS:%d\n",sum);

    return 0;
}