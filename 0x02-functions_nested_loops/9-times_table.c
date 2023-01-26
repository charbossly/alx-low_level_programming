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
				_putchar(' ');
			}
			if (m != 0 && n * m < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			if(m * n / 10 != 0)
    			{
        			putchar(i % 10);
   			}
			if (m != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
