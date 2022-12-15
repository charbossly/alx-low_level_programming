#include "main.h"

/**
* print_line - This is a description
*  @n: Description of parameter n
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
