#include "main.h"

/**
* _pow_recursion - This is a description
* @x: Description of parameter x
* @y: Description of parameter y
* Return: integer
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
