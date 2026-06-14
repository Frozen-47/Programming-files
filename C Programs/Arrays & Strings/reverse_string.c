#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("ENTER A STRING : ");
    scanf("%s",a);
    int len = strlen(a);
    printf("THE REVERSE OF THE GIVEN STRING IS :");
    for (int i = len - 1;i>=0;i--){
        printf("%c",a[i]);
        
    }
    return 0;
}