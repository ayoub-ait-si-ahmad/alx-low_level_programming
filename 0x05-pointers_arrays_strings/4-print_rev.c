#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * @str: the string
 */

void print_rev(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(str[len]);
		len--;
	}
	_putchar('\n');
}

