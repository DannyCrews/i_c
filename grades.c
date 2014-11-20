#include <stdio.h>
int main(void)
{
 int score = 95;
 switch( score/10 ) {
 case 10:
 case 9:
 printf("Your grade is an A\n");
 break;
 case 8:
 printf("Your grade is a B\n");
 break;
 case 7:
 printf("Your grade is a C\n");
 break;
 case 6: 
 printf("Your grade is a D\n");
 break;
 default:
 printf("Your grade is an F\n");
 }
 return 0;
}
