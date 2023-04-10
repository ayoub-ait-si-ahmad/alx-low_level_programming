#include "main.h"

/**
 * _isalpha -  display 1 if the alphabet, in lowercase or uppercase
 * @c: parameter
 * Return: 1 if c is lowercase or uppercase else 0
 *
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	return (0);
_putchar('\n');
}

