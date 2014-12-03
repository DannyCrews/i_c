#include <stdio.h>

#define PI 3.141593

int main(void)
{
 float surface_area, volume; /* of a sphere */
 float radius;
 for( radius=2.5; radius <= 12.5; radius++ )
 {
 surface_area = 4*PI*radius*radius;
 volume = 4.0/3.0*PI*radius*radius*radius;
 printf( "The surface area is %f and the volume is %f of a sphere of radius %f\n", surface_area, volume, radius);
 }

 return 0;
 
}