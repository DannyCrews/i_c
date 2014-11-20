#include <stdio.h>
#define NUM1 45
#define NUM2 0
#define NUM3 -60
int main(void)
{
 printf("The absolute value of %d is %d\n", NUM1, (NUM1 >= 0) ? (NUM1) : (–NUM1) );
 printf("The absolute value of %d is %d\n", NUM2, (NUM2 >= 0) ? (NUM2) : (–NUM2) );
 printf("The absolute value of %d is %d\n", NUM3, (NUM3 >= 0) ? (NUM3) : (–NUM3) );
 return 0;
}
