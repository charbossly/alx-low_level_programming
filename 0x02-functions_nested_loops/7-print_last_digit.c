#include "main.h"

/**
 * print_last_digit - check the code
 *
 * Return: Always 0.
 */

int print_last_digit(int a)
{
	_putchar(abs(a % 10) + '0');
	return (abs(a % 10));
}
