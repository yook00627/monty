#include "monty.h"

/**
 * opcode - check for operation code
 * @command: cammand input
 * @line_num: line number
 * @stack: stack of memory
 */
void opcode(char *command, unsigned int line_num, stack_t **stack)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
	};

	while (ops[i].opcode != NULL)
	{
		if (strcmp(ops[i].opcode, command) == 0)
		{
			ops[i].f(stack, line_num);
			return;
		}
		i++;
	}
	printf("L%d: unknown instruction %s\n", line_num, command);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
