#include <string.h>

#include "../monty.h"
#include "tests.h"

int main()
{
	char *bad_file = "empty.exe";

	printf("---- Testing for input filename ----\n");
	printf("Invalid filename: ");
	/* run from shell script to test exit status and error message */
	read_file(bad_file);

	return (0);
}
