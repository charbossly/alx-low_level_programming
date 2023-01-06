#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* _isupper - This is a description
* @c: Description of parameter c
* Return: 0 if no upper
*/
int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	return (0);
}
