#include <stdio.h>
#define PI 3.141593

int main(void) {
 float radius;

 do {
   printf("Please enter a radius\n");
   scanf("%f", &radius);
   if (radius >= 0 ) {
     printf("Surface area of a sphere with radius %.2f is %.2f\n",
     radius, 4.0*PI*radius*radius);
     printf("Area of a sphere with radius %.2f is %.2f\n",
     radius, 4.0/3.0*PI*radius*radius*radius);
     }
 }while ( radius >= 0);

 printf("Exiting since you entered a negative radius\n");
 return 0;
}