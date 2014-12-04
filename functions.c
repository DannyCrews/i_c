#include <stdio.h>
#include <math.h>

/* Function Prototype */
float average( float a, float b, float c, float d);

int main(void)
{
 printf("The average of %f, %f, %f, %f is %f\n", 10.0, 20.0, 30.0, 40.0,
 average( 10.0, 20.0, 30.0, 40.0) );
 return 0;

}
float average( float a, float b, float c, float d)
{
 return( (a+b+c+d)/4.0 );
}