#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the lowercase alphabet
 */
void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 1 ; x <= 10; x++)
	{
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	}
}
