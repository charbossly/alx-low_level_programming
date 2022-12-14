#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check the code
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{

	if (isalpha(c) || islower(c) || isupper(c))
	{
		return (1);
	}
	return (0);
}
