#include<stdio.h>
int
main ()
{
  float l, b, h,t,s,m, volume;
  printf ("ENTER THE LENGTH:");
  scanf ("%f", &l);
  printf ("ENTER THE BREADTH:");
  scanf ("%f", &b);
  printf ("ENTER THE HEIGHT:");
  scanf ("%f", &h);
  volume = l * b * h;
  printf ("\nTHE VOLUME OF CUBOID IS:%.2f", volume);
  printf("\nTIME TAKEN TO FILL ONE UNIT:");
  scanf ("%f",&t);
  s=volume*t;
  m=s/60;
  printf("TIME TAKEN TO FILL ALL UNITS:%.2f",m);
  return 0;
  
  
}
