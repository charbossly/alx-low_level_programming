#include "shell.h"
/**
 * main - our command line interpreter
 * Return: 0 Always Success
 */
int main(void)
{
	int cont;
	char *buf;
	char **splitBuf;
	size_t sizebuf = 1024;
	size_t inputchar;

	buf = malloc(sizebuf * 1);

	if (buf == NULL)
	{
		perror("Unable to allocate buffer"), exit(1);
	}
	while (1)
	{
		cont++;
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "$ ", 2), inputchar = getline(&buf, &sizebuf, stdin);
			if (inputchar == EOF)
			{
				write(STDOUT_FILENO, "\n", 1), free(buf), exit(0);
			}

			if (inputchar == 1)
			{
				continue;
			}

			splitBuf = splitInput(buf);
			enviromentShell(splitBuf), exitof(splitBuf, buf);
			duplicateProcess(buf, splitBuf);
		}
		else
		{inputchar = getline(&buf, &sizebuf, stdin);
			write(STDOUT_FILENO, buf, inputchar);
			break;
		}
	}
	free(buf);
}
