#include "../monty.h"
#include "tests.h"
/**
 * ensure compiled file is run with no arguments
 */

int main(int argc, char **argv)
{
	char **args = malloc(sizeof(char *) * (argc + 3));
	int i;

	/* copy all arguments*/
	for (i = 0; i < argc; ++i)
	{
		args[i] = argv[i];
	}

	/* append two arguments */
	args[i] = "foo";
	args[i + 1] = "bar";

	args[i + 2] = NULL;

	printf("---- Testing for command line arguments ----\n");
	printf("Invalid arguments(two arguments): ");
	/* should exit, test from shell script */
	read_args(argc + 2, args);

	return (0);
}
