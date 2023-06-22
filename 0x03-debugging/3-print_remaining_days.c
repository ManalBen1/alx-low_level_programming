#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int day_of_year = 0;
int i;

for (i = 1; i < month; i++)
{
day_of_year += days_in_month[i];
}

day_of_year += day;

if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
days_in_month[2] = 29;

if (month > 2 || (month == 2 && day > 29))
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}
day_of_year++;
printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", 366 - day_of_year);
}
else
{
if (month == 2 && day > 28)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

printf("Day of the year: %d\n", day_of_year);
printf("Remaining days: %d\n", 365 - day_of_year);
}
}

