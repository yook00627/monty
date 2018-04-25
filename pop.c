#include "monty.h"

void pop(stack_t **stack, unsigned int line_num)
{
	stack_t *next = NULL;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_num);
		return;
	}

	next = (*stack)->next;
	free(*stack);
	*stack = next;
	if (*stack == NULL)
		return;
	(*stack)->prev = NULL;
}
