#include "monty.h"

void add(stack_t **stack, unsigned int line_num)
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
                printf("L%d: can't add, stack too short\n", line_num);
                exit(EXIT_FAILURE)
        }

        current = *stack;

        total = current->n + current->next->n;

        /*run pop if it works then change second element with total and return*/

}