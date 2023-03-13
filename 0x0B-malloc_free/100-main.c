#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program.
 *
 * @ac: The number of command-line arguments.
 * @av: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, otherwise 1.
 */

int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
	return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
