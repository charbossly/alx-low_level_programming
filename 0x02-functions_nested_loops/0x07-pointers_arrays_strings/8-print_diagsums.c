#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_diagsums- This is a description
* @a: Description of parameter a
* @size: Description of parameter size
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum1 += *(a + (i * size + j));
			}
			if (j + i == size - 1)
			{
				sum2 += *(a + (i * size + j));
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);

}
