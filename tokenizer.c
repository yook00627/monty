#include "monty.h"
global_v arg_holder;

void tokenizer(char *string)
{
        unsigned int linenum = 1;
        stack_t *stack = NULL;
        char *lines = NULL, *command = NULL, *save;

        lines = strtok_r(string, "\n", &save);
        while (lines != '\0')
        {
                command = strtok(lines, "\t ");
                arg_holder.arg = strtok(NULL, "\t ");
		arg_holder.success = 1;
                opcode(command, linenum, string, &stack);
                linenum++;
		lines = strtok_r(NULL, "\n", &save);
        }
}
