#include <stdio.h>
 void main()
 {
 int score;
 printf("Please enter a score :"); 
scanf("%i", &score);
 
 switch (score)  {
 case 10:
 case  9: printf("A\n");
 case  8:
 break;
 case  7: printf("B\n");
 case  6:
 break;
 case  5: printf("C\n");
 case  4:
 break;
 case  3: printf("D\n");
 break;
 default: printf("F\n");
 } 
 }