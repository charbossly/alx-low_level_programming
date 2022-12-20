#include "main.h"
#include <string.h>

/**
* puts_half - This is a description
* @str: Description of parameter str
*/
void puts_half(char *str)
{
	int i;

	for (i = ((strlen(str) - 1) / 2) + 1; i <= (int)strlen(str) - 1; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
