#include "monty.h"

void pall(stack_t **stack, unsigned int line_num)
{
        stack_t *current;

        if (stack == NULL || *stack == NULL)
                return;
        
        current = *stack;
        while (current != NULL)
        {
                printf("%d\n", *current->n);
                current = current->next;
        }
        return;
}