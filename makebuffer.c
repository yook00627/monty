#include "monty.h"

void *make_buffer(char *file_name)
{
	size_t size = 0;
	FILE *file_input;
	char *str = NULL;
	unsigned int linenum = 1;
	stack_t *stack = NULL;
	char *command = NULL;

	file_input = fopen(file_name, "r");
	if (file_input == NULL)
	{
		printf("Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}

	while (getline(&str, &size, file_input) != -1)
	{
		arg_holder.input_str = str;
		command = strtok(str, "\t ");
		arg_holder.arg = strtok(NULL, "\t ");
		opcode(command, linenum, &stack);
		linenum++;
	}
	fclose(file_input);
	free_stack(&stack);

}
