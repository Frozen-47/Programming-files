
 #include <stdio.h>
 int main()
 {
 int score;
 printf("Please enter a score :");
scanf("%i", &score);
if (score>10)  
printf("INVALID MARK\n");
else
if ((score == 10) || (score == 9))  
printf("A\n");
 else
 if ((score == 8) || (score == 7)) 
printf("B\n");
 else
 if ((score == 6) || (score == 5))
 printf("C\n");
 else
 if ((score == 4) || (score == 3))
 printf("D\n");
 else
 printf("F\n");
 return 0;
 }
 