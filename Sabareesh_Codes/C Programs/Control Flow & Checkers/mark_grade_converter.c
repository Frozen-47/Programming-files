#include<stdio.h>
int main(){
    int mark;
    printf("ENTER YOUR MARK:");
    scanf("%d",&mark);
    if(mark>=90&&mark<=100){printf("YOUR GRADE IS A");}
    else if(mark>=75&&mark<90){printf("YOUR GRADE IS B");}
    else if(mark>=50&&mark<75){printf("YOUR GRADE IS C");}
    else if(mark>=35&&mark<50){printf("YOUR GRADE IS D");}
    else{printf("YOUR GRADE IS E");}
    return 0;
    
    
    
    
}