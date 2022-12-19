#include "main.h"

/**
* print_array - This is a description
* @a: Description of parameter a
* @n: Description of parameter n
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			_putchar(',');
			if (i != n - 1)
			{
				_putchar(' ');
			}
		}
		_putchar(*(str + i));
	}
	_putchar('\n');
}
