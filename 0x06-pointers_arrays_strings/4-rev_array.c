#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
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
