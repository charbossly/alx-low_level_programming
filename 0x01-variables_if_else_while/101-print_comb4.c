#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This is a description
* Return: 0
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if ((i != j) != k && i != j && j != k && k != i && (i < j) < k && i < j && j < k)
				{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');
				putchar(k % 10 + '0');
					if (i * 100 + j * 10 + k != 789)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
