#include <stdio.h>
#include "area.h"

int main(void)
{
  float area, radius=2.5;
  area = PI*radius*radius;
  printf("The value of the area is %f\n", area);
  return 0;
}