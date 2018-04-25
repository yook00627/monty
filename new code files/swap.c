#include "monty.h"

void swap(stack_t **stack, unsigned int line_num)
{
        stack_t *current = NULL;
        int holder = 0, length = 0;

        current = *stack;
        while (*current != NULL)
        {
                current = current->next;
                length++;
        }

        if (length < 1)
        {
                printf("L%d: can't swap, stack too short\n", line_num);
                exit(EXIT_FAILURE)
        }
        current = *stack;

        holder = current->n;

        current->n = holder;
        current->n = current->next->n;
        current->next->n = holder;

        return;

}