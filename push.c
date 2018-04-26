#include "monty.h"

/**
 * isnum - check if string is a number
 * @str: string input
 * Return: 0 if false 1 if true
 */
int isnum(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);

}

/**
 * push - push integers to memory
 * @stack: stack of memory
 * @line_num: line number
 */
void push(stack_t **stack, unsigned int line_num)
{
	stack_t *new;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	if (!(isnum(arg_holder.arg)))
	{
		printf("L%u: usage: push integer\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	new->n = atoi(arg_holder.arg);
	if (*stack == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*stack = new;
	}
	else
	{
		(*stack)->prev = new;
		new->next = *stack;
		new->prev = NULL;
		*stack = new;
	}
}
