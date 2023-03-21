#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the lowercase alphabet
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
}
