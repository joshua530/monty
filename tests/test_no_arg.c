#include "../monty.h"
#include "tests.h"
/**
 * ensure compiled file is run with no arguments
 */

int main(int argc, char **argv)
{
	printf("---- Testing for command line arguments ----\n");
	printf("Invalid arguments(no argument): ");
	/* should exit, test from shell script */
	read_args(argc, argv);

	return (0);
}
