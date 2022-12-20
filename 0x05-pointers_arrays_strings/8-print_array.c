#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_array - This is a description
* @a: Description of parameter a
* @n: Description of parameter n
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(",");
			printf(" ");
		}
		printf("%d", *(a + i));
	}
	_putchar('\n');
}
