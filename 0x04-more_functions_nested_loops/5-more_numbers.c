#include "main.h"

/**
* more_numbers - This is a description
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j % 100 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
