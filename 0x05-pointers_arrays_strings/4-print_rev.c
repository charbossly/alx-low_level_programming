#include "main.h"
#include <string.h>

/**
* print_rev - This is a description
* @s: Description of parameter s
*/
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i <= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
