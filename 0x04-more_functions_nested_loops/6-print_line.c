#include "main.h"

/**
* print_line - This is a description
* @n: Description of parameter n
*/

void print_line(int n)
{
	int i;

	if (n > 0)
        {
                for (i = 0; i < n; i++)
                {
                        _putchar('_');
                }
        }
	_putchar('\n');
}
