#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int x = '1';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
