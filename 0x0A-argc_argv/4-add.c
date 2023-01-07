#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - check the code
 * @argc: parameter argc
 * @argv: parameter argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d", sum);
		printf("\n");
		return (0);
	}
	printf("0\n");
	return (1);
}
