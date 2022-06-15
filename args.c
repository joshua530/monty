#include "monty.h"
#include <stdio.h>

/**
 * read_args - parses command line arguments
 *
 * it reads the input given by user and returns filename if
 * one input is given.
 * If no input is given or more than one input is given, the
 * program exits with status EXIT_FAILURE
 *
 * TODO: can argc and len(args) differ? if so, deal with this case
 *
 * Return: file name if input is valid
 */
char *read_args(int argc, char **args)
{
	if (argc > 2 || argc == 1)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}

	return (args[1]);
}
