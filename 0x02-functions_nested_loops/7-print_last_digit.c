#include "main.h"
#include <stdio.h>
/*
 * This function takes an integer argument and prints its last digit to the console.
 * If the integer is negative, it first converts it to a positive value and then prints its last digit.
 * The function returns zero.
 */
int print_last_digit(int)
{
	int x;

	if (x < 0)
	{
		x = (x * -1);
		x = (x % 10);
		putchar(x + '0');
		putchar('\n');
	} else
	{
		x = (x % 10);
		putchar(x + '0');
		putchar('\n');
	}
	return (0);
}
