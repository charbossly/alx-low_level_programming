#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
			if (j >= 10)
			{
				printf("1");
			}
			_putchar(j % 100 + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
