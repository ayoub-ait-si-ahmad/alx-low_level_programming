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
	int total_days = 365;

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		total_days = 366;
	}
	if (month > 2 && total_days == 366)
	{
		day++;
	}
	if (day > day_of_year[month])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
		int remaining_days = total_days - day_of_year[month] + day;

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", remaining_days);
	}
}
