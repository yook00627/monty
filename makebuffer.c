#include "monty.h"

char *make_buffer(char *file_name)
{
	int file_size = 0;
	FILE *file_input;
	char *str = NULL;

	file_input = fopen(file_name, "r");
	if (file_input == NULL)
	{
		printf("Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
	fseek(file_input, 0, SEEK_END);
	file_size = ftell(file_input);
	rewind(file_input);
	str = malloc(sizeof(char) * (file_size + 1));
	fread(str, file_size, 1, file_input);
	str[file_size] = '\0';
	fclose(file_input);
	return (str);

}
