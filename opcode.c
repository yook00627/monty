#include "monty.h"

void opcode(char *command, unsigned int line_num, stack_t **stack)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{NULL, NULL}
	};

	if (command == NULL)
		return;
	while (ops[i].opcode != NULL)
	{
		if (strcmp(ops[i].opcode, command) == 0)
		{
			ops[i].f(stack, line_num);
		}
		i++;
	}
}
