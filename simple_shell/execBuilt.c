#include "shell.h"
/**
 * splitInput - Split the user input
 * @array: Is the string input
 * Return: The set of tokens
 */
char **splitInput(char *array)
{
	int counter = 0, i = 0;
	char *tokenC;
	char *token;
	char **space;
	char *arrayCopy;

	arrayCopy = strdup(array);
	tokenC = strtok(arrayCopy, " \n\t");

	arrayCopy = _strdup(array);

	while (tokenC != NULL)
	{
		tokenC = strtok(NULL, " \n\t");
		counter++;
	}
	free(arrayCopy);

	space = malloc(sizeof(char *) * (counter + 1));
	token = strtok(array, " \n\t");

	while (token != NULL)
	{
		space[i] = token;
		token = strtok(NULL, " \n\t");
		i++;
	}
	space[i] = NULL;
	return (space);
}
/**
* duplicateProcess - Duplicate the calling process
* @array: Is the string input
* @space: The set of tokens
* Return: Nothing
*/
void duplicateProcess(char *array, char **space)
{
	pid_t my_pid;
	pid_t pid;
	int status;

	pid = fork();

	if (pid > 0)
	{
		wait(&status);
	}
	else if (pid == -1)
	{
		perror("Error:");
		free(array);
		free(space);
		exit(0);
	}
	else if (pid == 0)
	{
		if ((execve(space[0], space, NULL) == -1))
		{
			perror("Does not execute, write valid command");
			free(array);
			free(space);
			exit(0);
		}
	}
}
/**
 * enviromentShell - Gives the enviroment
 * @space: Is the set of tokens
 * Return: Nothing
 */
void enviromentShell(char **space)
{
	char **environ;
	int i = 0;

	if (_strcmp(space[0], "env") == 0)
	{
		while (environ[i] != NULL)
		{
			write(STDOUT_FILENO, environ[i], strlen(environ[i]));
			write(STDOUT_FILENO, "\n", strlen(environ[i]));
			i++;
		}
	}
}
/**
 * exitof - Split the user input
 * @space: The set of tokens
 * @array: Is the string input
 * Return: Nothing
 */
void exitof(char **space, char *array)
{
	if (_strcmp(space[0], "exit") == 0)
	{
		free(space);
		free(array);
		exit(0);
	}
}
