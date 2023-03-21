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
	char strings[9] = "_putchar\n";

	for (i = 0 ; i <= 8; i++)
	{
		putchar(strings[i]);
	}
	return (0);
}
