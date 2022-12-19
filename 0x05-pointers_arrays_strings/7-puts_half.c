#include "main.h"

/**
* puts_half - This is a description
* @str: Description of parameter str
*/
void puts_half(char *str)
{
	int i;

	for ( i = (strlen(str) - 1 / 2); i < strlen(str); i++)
	{
		_putchar(*(str+i));
	}
	_putchar('\n');
}
