#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* print_most_numbers - This is a description
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i % 10 + '0');
		}
	}
	_putchar('\n');
}
