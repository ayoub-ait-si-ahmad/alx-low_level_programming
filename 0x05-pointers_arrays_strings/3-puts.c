#include "main.h"

/**
 * _puts - prints a given string
 * @str: the string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

