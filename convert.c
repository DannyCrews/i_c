#include <stdio.h>
#define SECONDS_TO_CONVERT 7516 
#define SECONDS_IN_A_MINUTE 60
#define SECONDS_IN_AN_HOUR 3600
int main(void)
{
 int hours, minutes, seconds; 
 
 /* Calculate the number of hours */
 hours = SECONDS_TO_CONVERT/SECONDS_IN_AN_HOUR; 
 
 /* Calculate the number of minutes */
 /*(number of seconds left divided by number of seconds in a minute) */
 minutes = (SECONDS_TO_CONVERT % SECONDS_IN_AN_HOUR)/SECONDS_IN_A_MINUTE; 
 /* Calculate how many seconds are left */
 seconds = SECONDS_TO_CONVERT % SECONDS_IN_A_MINUTE;
 
 printf("%d seconds converts to %d hours, %d minutes, %d seconds\n",
 SECONDS_TO_CONVERT, hours, minutes, seconds);
 
 return 0;
}
