#include "shell.c"
/**
 * _strlen - length of string
 *@s: input pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
