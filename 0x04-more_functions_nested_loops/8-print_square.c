#include "main.h"

/**
* print_square - This is a description
* @size: Description of parameter size 
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; size++)
			{
				_putchar("#");
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
