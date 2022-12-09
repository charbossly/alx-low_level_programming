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
	for (n = 'a'; n != 'z'; n++)
	{
	putchar(n);
	}
	for (n = 'A'; n != 'Z'; n++)
        {
        putchar(n);
        }

	putchar('$');
	return (0);
}
