#include "monty.h"

void pint(stack_t **stack, unsigned int line_num)
{
        if (stack == NULL || *stack == NULL)
        {
                printf("L%d: can't pint, stack empty\n", line_num);
                exit(EXIT_FAILURE)
        }
        printf("%d\n", *stack->n);
        return;
}