#include "monty.h"

void pall(stack_t **stack, unsigned int line_num)
{
        if (stack == NULL || *stack == NULL)
                return;
        
        while (*stack != NULL)
        {
                printf("%d\n", *stack->n);
                stack = stack->next;
        }
        return;
}