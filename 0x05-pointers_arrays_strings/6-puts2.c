#include "main.h"

/**
* puts2 - This is a description
* @str: Description of parameter str
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
