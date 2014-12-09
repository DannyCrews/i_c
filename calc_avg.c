#include <stdio.h>
void calc_avg_sum_of_4numbers(float, float, float, float, float *, float *);
int main(void)
{
float a,b,c,d; /* 4 numbers to get from the user */
  float average, sum;
  printf("Please enter 4 floating point numbers \n");
  if ( scanf("%f %f %f %f", &a, &b, &c, &d) != 4)
  {
    printf("There was an error reading the 4 numbers!\n");
    return 1;
  }
  calc_avg_sum_of_4numbers( a, b, c, d, &average, &sum);
  printf("%f + %f + %f + %f = %f, and their average is %f\n",
    a, b, c, d, sum, average);
  return 0;
}
void calc_avg_sum_of_4numbers( float num1, float num2,
  float num3, float num4, float *avg_ptr, float *sum_ptr)
{
  *sum_ptr = num1 + num2 + num3 + num4;
  *avg_ptr = *sum_ptr/4.0;
  return;
}