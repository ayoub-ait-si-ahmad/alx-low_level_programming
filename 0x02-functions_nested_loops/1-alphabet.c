#include "main.h"
#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
