#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number.
 * @x: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
		x = (x * -1);
		x = (x % 10);
	} else
	{
		x = (x % 10);
	}
	_putchar(x + '0');
	_putchar('\n');
	return (0);
}
