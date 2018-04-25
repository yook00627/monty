#include "monty.h"

void div(stack_t **stack, unsigned int line_num)
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
                arg_holder.success = 0;
                return
        }

        if (*stack->n == 0)
        {
                printf("L%d: division by zero\n", line_num);
                arg_holder.success = 0;
                return
        }

        current = *stack;

        total = current->next->n / current->n;

        /*run pop if it works then change second element with total and return*/

        /* pop(stack, line_num);

        *stack->n = total;*/

       return;
}