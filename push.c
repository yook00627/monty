#include "monty.h"


int isnum(char *str)
{
	if (str == NULL || *str == '\0')
		return 0;
	while(*str)
	{
		if(!isdigit(*str))
			return 0;
		str++;
	}
	return 1;

}


/**
 *
 *
 */
void push(stack_t **stack, unsigned int line_num)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed");
		arg_holder.success = 0;
		return;
	}
	if (!(isnum(arg_holder.arg)))
	{
		printf("L%u: usage: push integer\n", line_num);
		arg_holder.success = 0;
		return;
	}
	new->n = atoi(arg_holder.arg);
	if (*stack == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*stack = new;
		return;
	}
	(*stack)->prev = new;
	new->next = *stack;
	new->prev = NULL;
	*stack = new;
	return;
}
