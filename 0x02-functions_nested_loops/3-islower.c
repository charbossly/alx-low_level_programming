#include "main.h"
/**
 * _islower - check the code
 * @c: Description of parameter c
 *
 * Return: 1 if c is lowercase.
 */

int _islower(int c)
{

	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
