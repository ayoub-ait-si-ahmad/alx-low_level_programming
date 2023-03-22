#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int i = 0;
	int x = 0;

	while (i <= 23)
	{
		while (x <= 59)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
			_putchar('\n');
			x++;
		}
		i++;
	}
}
