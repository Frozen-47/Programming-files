#include<stdio.h>
int main() {
    char a;
    printf("ENTER A CHARACTER:");
    scanf("%c",&a);
    if(a>='A'&&a<='Z'||a>='a'&&a<='z'){
        printf("ENTERED CHARACTER IS AN ALPHABET");
    }
        else if(a>='0'&&a<='9'){
        printf("ENTERED CHARACTER IS AN NUMBER");
    }
    else {
        printf("ENTERED CHARACTER IS A SPECIAL CHARACTER");
    }
}