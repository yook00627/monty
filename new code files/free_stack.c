#include "monty.h"
/**
 * free_dlistint - free lists
 * @head: input list pointer
 */
void free_stack(dlistint_t **head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = (*head)->next;
		free(*head);
		head = current;
	}
}