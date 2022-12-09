#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This is a description
* Return: 0
*/
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
	if (n != 'q' && n != 'e')
	{
	putchar(n);
	}
	}
	putchar('\n');
	return (0);
}
