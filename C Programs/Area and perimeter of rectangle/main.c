#include<stdio.h>
int
main ()
{
  float a, b, area, perimeter;
  printf ("ENTER THE LENGTH:");
  scanf ("%f", &a);
  printf ("ENTER THE BREADTH:");
  scanf ("%f", &b);
  area = (float)a * b;
  printf ("THE AREA OF RECTANGLE IS:%.2f", area);
  perimeter =(float) 2 * (a + b);
  printf ("\nTHE PERIMETER OF RECTANLE IS:%.2f", perimeter);
  return 0;
}
