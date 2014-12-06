#include <stdio.h>

int main(void)
{
 float area, length, width;

 printf("Please enter a length: ");

 if ( scanf("%f", &length) != 1 )
 {
   printf( "Error reading length\n");
   return 1;
 }
 printf("Please enter a width: ");
 if ( scanf("%f", &width) != 1 )
   {
   printf( "Error reading width\n");
   return 2;
   }
 /* Calculate area of the rectangle */
 area = length * width;

 if ( length > 0 && width > 0)
   printf("For a rectangle of length %.2f and a width of %.2f, the area is %.2f\n",
   length, width, area);
 else
   printf( "Sorry, you did not enter a valid length/width\n");
 return 0;
}