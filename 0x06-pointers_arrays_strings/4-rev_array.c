#include "main.h"
#include <stdio.h>

/**
 * print_buffer - check the code
 * @b: an array of chars
 * @size: the number
 *
 * Return: nothing.
 */
void print_buffer(char *b, int size)
{
	int i, j;
	int tab[13];

	j = 0;
	i = n - 1;
	while (i >= 0)
	{
		tab[j] =  a[i];
		i--;
		j++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = tab[i];
		i++;
	}
}
