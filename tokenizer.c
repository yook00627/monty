#include "monty.h"
global_v arg_holder;

void tokenizer(char *string)
{
	unsigned int linenum = 1;
	stack_t *stack = NULL;
	char *lines = NULL, *command = NULL, *save;

	arg_holder.input_str = string;
	lines = strtok_r(string, "\n", &save);
	while (lines != '\0')
	{
		command = strtok(lines, "\t ");
		arg_holder.arg = strtok(NULL, "\t ");
		opcode(command, linenum, &stack);
		linenum++;
		lines = strtok_r(NULL, "\n", &save);
	}
	free_stack(&stack);
}
