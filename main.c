#include "monty.h"

int main(int argc, char **argv)
{
	char *str = NULL;
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	str = make_buffer(argv[1]);
	return (EXIT_SUCCESS);
}
