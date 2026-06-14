#include<stdio.h>
int
main ()
{
  float l, b, h, volume;
  printf ("ENTER THE LENGTH:");
  scanf ("%f", &l);
  printf ("ENTER THE BREADTH:");
  scanf ("%f", &b);
  printf ("ENTER THE HIGHT:");
  scanf ("%f", &h);
  volume = l * b * h;
  printf ("\nTHE VOLUME OF CUBOID IS:%.2f", volume);
  return 0;
}
