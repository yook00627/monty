#include "monty.h"

void mul(stack_t **stack, unsigned int line_num)
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

        current = *stack;

        total = current->next->n * current->n;

        pop(stack, line_num);

        *stack->n = total;
        return;
}