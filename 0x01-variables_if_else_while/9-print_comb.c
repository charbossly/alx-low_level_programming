#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This is a description
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	putchar(i % 10 + '0');
	if (i != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
