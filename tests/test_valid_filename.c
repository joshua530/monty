#include <string.h>

#include "../monty.h"
#include "tests.h"

int main()
{
	char *good_file = "valid_file.m";

	char *expected = "push $1\npall\n";
	char *actual = read_file(good_file);

	printf("---- Testing for input filename ----\n");
	if (strcmp(expected, actual) == 0)
		printf("Valid filename: success\n");
	else
		printf("Valid filename: failed\n");

	return (0);
}
