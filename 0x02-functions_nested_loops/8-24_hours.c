#include "main.h"

/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10 ; b++)
		{
			if (a == 2 && b > 3)
			{
				break;
			}
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
