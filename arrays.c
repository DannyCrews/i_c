#include <stdio.h>
#define SIZE 4
void calc_avg_sum(float *, int, float *, float *);
int main(void)
{
  int i;
float num[SIZE]; /* numbers to get from the user */
  float average, sum;
  printf("Please enter %d floating point numbers \n", SIZE);
  for( i=0; i<SIZE; i++)
  {
    if ( scanf("%f", &num[i]) != 1)
    {
      printf("There was an error reading number %d!\n", i+1);
      return 1;
    }
  }
  calc_avg_sum( num, SIZE, &average, &sum);
  printf("The sum is %f and the average is %f\n", sum, average);
  return 0;
}
void calc_avg_sum( float *values, int size, float *avg_ptr,
  float *sum_ptr)
{
  float sum=0.0;
  int i;
  for (i=0; i<size; i++)
    sum += values[i];
  *sum_ptr = sum;
  *avg_ptr = sum / size;
  return;
}