#include <stdio.h>


int main() {
    int mark;
    printf("ENTER YOUR MARK:");
    scanf("%d",&mark);
    if(mark<=100){
        if(mark>=50){printf("You have A grade");}
        else{printf("You have B grade");}
    }
else{printf("You entered a wrong value");}
return 0;
}
