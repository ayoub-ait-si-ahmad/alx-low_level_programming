#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lastDigit);
	} else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, lastDigit);
	} else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
