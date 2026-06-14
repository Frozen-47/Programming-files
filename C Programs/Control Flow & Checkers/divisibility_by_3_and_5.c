#include <stdio.h>
int main()
{
    int marks;
    
    printf("PLEASE ENTER A NUMBER LESSTHAN OR EQUAL TO 200   :  ");
    scanf("%d",&marks);
    
    if(marks<=200){
        if(marks%5==0&&marks%3==0){
            printf("THE NUMBER CAN BE DIVISIBLE BY 3 AND 5\nTHANK YOU FOR VISITING US ...");
        }
        else if(marks%5==0){
            printf("THE NUMBER CAN BE DIVISIBLE BY 5\nTHANK YOU FOR VISITING US ...");
    }
   else if(marks%3==0){
            printf("THE NUMBER CAN BE DIVISIBLE BY 3\nTHANK YOU FOR VISITING US ...");
    }
    else{ printf("THE NUMBER CANNOT BE DIVISIBLE BY 3 AND 5\nTHANK YOU FOR VISITING US ...");
    }
        
    }
    else{printf("SORRY THE NUMBER IS ABOVE 200");
    printf("\nBETTER LUCK NEXT TIME");}
    
    return 0;
}