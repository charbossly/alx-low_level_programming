#include "main.h"

/**
*  print_line - This is a description
* @a: Description of parameter a
*/
void print_line(int n)
{
	int i;

	if (i < 0 || i == 0)
	{
		_putchar('');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
