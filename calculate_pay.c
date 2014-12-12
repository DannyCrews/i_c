#include <stdio.h>
struct employee{
  long id_number;
  float hourly_wage;
  float hours_worked;
};
double calculate_pay( struct employee );
int main(void)
{
  struct employee George = {516, 29.50, 40.0};
  double weekly_pay;
  weekly_pay = calculate_pay(George);
  printf("Employee #%ld worked %.1f hours at $%.2f/hour"
    " for a weekly pay of $%.2f\n", George.id_number,
    George.hours_worked, George.hourly_wage, weekly_pay);
  return 0;
}
double calculate_pay( struct employee workerA )
{
  return workerA.hourly_wage * workerA.hours_worked;
}