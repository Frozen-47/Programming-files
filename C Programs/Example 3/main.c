 #include <stdio.h>
 #include <math.h>
 void main()
 {
 double value;
 printf("Please enter a non-negative number :");
scanf("%lf", &value); 
 if (value >= 0.0)
 printf("Square root of (%.2f) = %.2f \n", value,sqrt(value));
 else
 printf("Invalid user input, please enter non-negative value\n");
 }
 