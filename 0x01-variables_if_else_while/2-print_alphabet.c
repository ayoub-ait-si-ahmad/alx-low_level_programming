#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 **/
int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		x = tolower(x);
		putchar(x);
		x++;
	}
}
