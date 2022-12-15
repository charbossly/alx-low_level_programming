#include "main.h"

/**
 * print_last_digit - check the code
 * @a: Description of parameter a
 *
 * Return: Always 0.
 */

int print_last_digit(int a)
{
	_putchar(a % 10 + '0');
	return (a % 10);
}
