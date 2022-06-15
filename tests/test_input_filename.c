#include <string.h>

#include "../monty.h"
#include "tests.h"

int main()
{
	char *bad_file = "foo.m";
	char *good_file = "input_file.m";

	/* file exists */
	char *expected = "push $1\npall\n";
	char *actual = read_file(good_file);

	printf("---- Testing for input filename ----\n");
	if (strcmp(expected, actual) == 0)
		printf("Valid filename: passed\n");
	else
		printf("Valid filename: failed\n");

	/* file doesn't exist */
	if (read_file(bad_file) == NULL)
		printf("Invalid filename: passed\n");
	else
		printf("Invalid filename: failed\n");

	/* empty input */
	if (read_file(NULL) == NULL)
		printf("Empty input: passed\n");
	else
		printf("Empty input: failed\n");

	return (0);
}
