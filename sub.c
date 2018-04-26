#include "monty.h"
/**
 * sub - subtract top 2 numbers
 * @stack: input stack address
 * @line_num: current line number
 */
void sub(stack_t **stack, unsigned int line_num)
{
	stack_t *current = NULL;
	int length = 0, total = 0;

	current = *stack;
	while (current != NULL)
	{
		current = current->next;
		length++;
	}
	if (length < 1)
	{
		printf("L%d: can't sub, stack too short\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	current = *stack;

	total = current->next->n - current->n;

	pop(stack, line_num);

	(*stack)->n = total;
}
