#include "monty.h"

int main(int argc, char **argv)
{
	int file_size = 0;
	FILE *file_input;
	char *str;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_input = fopen(argv[1], "r");
	if (file_input == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	fseek(file_input, 0, SEEK_END);
	file_size = ftell(file_input);
	rewind(file_input);
	str = malloc(sizeof(char) * file_size);
	fread(str, file_size, 1, file_input);
	printf("%s\n", str);
	fclose(file_input);
	return (0);
}
