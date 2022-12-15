#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* _isdigit - This is a description
* @c: Description of parameter c
* Return: 0 if no upper
*/
int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	return (0);
}
