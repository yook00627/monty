#include "monty.h"
/**
 * mod - modulus top 2 numbers
 * @stack: input stack address
 * @line_num: current line number
 */
void mod(stack_t **stack, unsigned int line_num)
{
	stack_t *current = NULL;
	int length = 0, total = 0;

	current = *stack;
	while (*current != NULL)
	{
		current = current->next;
		length++;
	}
	if (length < 1)
	{
		printf("L%d: can't div, stack too short\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	if (*stack->n == 0)
	{
		printf("L%d: division by zero\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	current = *stack;

	total = current->next->n % current->n;

	pop(stack, line_num);

	*stack->n = total;
}
