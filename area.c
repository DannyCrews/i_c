/* This program calculates the area
 * of a circle who's radius is stored
 * in the variable radius */

 /* #define PI 3.141593 - could have been used instead of calling area.h header file */

#include <stdio.h>
#include "area.h"

/* comments begin here
multiple lines
and end here */

// is used for C99 comments

int main(void)
{
  float area;       /* area if the circle */
  float radius=2.5; /* radius of the circle */

  /* calculate the area of a circle */
  area = PI*radius*radius;

  /* print the values to the standard output */
  printf("The area of a circle with radius %f is %f\n", radius, area);

  return 0;
}