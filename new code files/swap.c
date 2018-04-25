#include "monty.h"

void swap(stack_t **stack, unsigned int line_num)
{
        stack_t *current = NULL;
        int holder = 0, length = 0;

        if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        {
                printf("L%d: can't swap, stack too short\n", line_num);
                arg_holder.success = 0;
                return
        }
        current = *stack;

        holder = current->n;

        current->n = holder;
        current->n = current->next->n;
        current->next->n = holder;

        return;

}