#include "main.h"

/**
* _print_rev_recursion - This is a description
* @s: Description of parameter s
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*(s - 1));
		_print_rev_recursion(s - 1);
	}
}
