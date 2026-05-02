#include <stdio.h>

void
main ()
{
  int odd, count;
  printf ("ENTER A NUMBER:");
  scanf ("%d", &count);
  printf ("THE ODD NATURAL NUMBERS ARE\n");
  for (odd = 1; odd <= count; odd += 2, count++)
	{
	  printf ("%d  ", odd);
	}
 }
