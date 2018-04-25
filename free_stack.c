#include "monty.h"
/**
 *
 * @head: input list pointer
 */
void free_stack(stack_t **head)
{
	stack_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	free(arg_holder.input_str)
}
