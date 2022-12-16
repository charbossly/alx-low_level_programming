#include "main.h"

/**
* void print_triangle - This is a description
* @size: Description of parameter size 
*/

void print_triangle(int size)
{
	int i, j, k;

	k = size - 1;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; size++)
			{
				if (j > k)
				{
					 _putchar("#");
				}
				else
				{
					_putchar(" ");
				}
			}
			k--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
