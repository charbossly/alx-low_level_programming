#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This is a description
* Return: 0
*/
int main(void)
{
	char n[26] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int i;
	for (i = 0; i < 16; i++)
	{
	putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
