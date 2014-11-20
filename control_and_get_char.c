#include <stdio.h>

#define NUMBER1 145
#define NUMBER2 4

int main(void)
{
 int perator;  /* Operator to get from user */
 
 printf("Please enter an arithmetic operator ( + - * / or %% ): ");
 
 if ((perator=getchar()) == '*')
  printf(" %d * %d = %d\n", NUMBER1, NUMBER2, NUMBER1 * NUMBER2);
 else if (perator == '/')
  printf(" %d / %d = %d\n", NUMBER1, NUMBER2, NUMBER1 / NUMBER2);
 else if (perator == '+')
  printf(" %d + %d = %d\n", NUMBER1, NUMBER2, NUMBER1 + NUMBER2);
 else if (perator == '-')
  printf(" %d - %d = %d\n", NUMBER1, NUMBER2, NUMBER1 - NUMBER2);
 else if (perator == '%')
  printf(" %d %% %d = %d\n", NUMBER1, NUMBER2, NUMBER1 % NUMBER2);
 else if (perator == EOF)
  printf("End of file encountered\n");
 else
  printf("Invalid operator entered\n");
 
 return 0;
}