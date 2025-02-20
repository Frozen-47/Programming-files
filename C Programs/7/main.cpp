#include <stdio.h>

int main() {
    int i, count = 0, n,sum=0;
    scanf("%d", &n);
    
    for(i = 2; count < n; i += 2) {
        printf("%d ", i);
        sum+=i;
        count++;
    }
    printf("\nTHE SUM OF THIS NUMBERS :%d",sum);
    return 0;
}
