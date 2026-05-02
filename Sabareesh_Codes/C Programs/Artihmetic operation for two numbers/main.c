#include<stdio.h>

int
main ()
{
  int a, b, c, d, e, f;
  printf ("ENTER FIRST NUMBER:");
  scanf ("%d", &a);
  printf ("ENTER SECOND NUMBER:");
  scanf ("%d", &b);
  c = a + b;
  d = a - b;
  e = a * b;
  f = a / b;
  printf ("THE SUM THIS NUMBER IS:%d", c);
  printf ("\nTHE SUBTRACTION OF THIS NUMBER IS:%d", d);
  printf ("\nTHE PRODUCT OF THIS NUMBER IS:%d", e);
  printf ("\nTHE DIVISION OF THIS NUMBER IS:%i", f);
  return 0;
}
