#include "main.h"
#include <string.h>

/**
* puts2 - This is a description
* @str: Description of parameter str
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i < (int) strlen(str); i++)
	{
		if (((int) *(str + i)) % 2 == 0)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}
