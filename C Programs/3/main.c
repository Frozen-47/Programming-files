#include <stdio.h>

int main() {
    int count = 1,a; 
    scanf("%d",&a);
    for (int i = 1; i <= a; i++) {
       
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            count++; 
        }
        printf("\n");
    }

    return 0;
}