#include <stdio.h>
int main() {
    int i, n;
    int j=1;
    printf("ENTER A NUMBER:");
   scanf("%d", &n); 
   for(i = 1; i <= n; ++i) {       
            j*=i;
   }
                printf("THE FACTORIAL OF %d is %d",n,j);
            
    return 0;
}
