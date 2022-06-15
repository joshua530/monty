#include "../monty.h"
#include "tests.h"
/**
 * ensure compiled file is run with no arguments
 */

int main(int argc, char **argv)
{
	char *file = "foo";
	char **valid_args = malloc(sizeof(char *) * (argc + 2));
	int i;

	/* copy all arguments*/
	for (i = 0; i < argc; ++i)
	{
		valid_args[i] = argv[i];
	}

	/* append our dummy argument */
	valid_args[i] = file;
	valid_args[i + 1] = NULL;

	printf("---- Testing for command line arguments ----\n");
	printf("Valid argument(one argument): ");
	if (read_args(argc + 1, valid_args) == file)
		printf("passed\n");
	else
		printf("failed\n");

	return (0);
}
