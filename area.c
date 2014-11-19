#include <stdio.h>
#include "area.h"

int main(void)
{
  float area, radius=2.5;
  area = PI*radius*radius;
  printf("The area of a circle with radius %f is %f\n", radius, area);
  return 0;
}