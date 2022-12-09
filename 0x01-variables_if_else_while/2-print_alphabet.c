#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - This is a description
* Return: 0
*/
int main(void)
{
	char n[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int i;
	for (i = 0; i < 26; i++)
	{
	putchar(n[i]);
	}
	putchar('\n');
	return (0);
}
