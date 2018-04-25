#include "monty.h"

void opcode(char *command, unsigned int line_num, char *str, stack_t **stack)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	while (ops[i].opcode != NULL)
	{
		if (strcmp(ops[i].opcode, command) == 0)
		{
			ops[i].f(stack, line_num);
			if (!(arg_holder.success))
			{
				free(str);
				
				exit(EXIT_FAILURE);
			}
		}
		i++;
	}
}
