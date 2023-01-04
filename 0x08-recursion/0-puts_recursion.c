#include "main.h"

/**
* _puts_recursion - This is a description
* @s: Description of parameter s
*/

void _puts_recursion(char *s)
{
	if (*(s) == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s));
		_puts_recursion(s + 1);
	}
}
