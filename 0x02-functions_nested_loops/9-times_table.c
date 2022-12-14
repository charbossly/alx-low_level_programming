#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
	        {
			if (n * m != 0 && n * m >= 10)
			{
				_putchar('.');
			}
			if (n * m != 0 && n * m < 10) 
                        { 
                                _putchar('.');
				_putchar('.');
                        }
			_putchar(n * m + '0');
			if (m != 9)
			{
				_putchar(',');
			}
		}
	}
}
