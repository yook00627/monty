#include "monty.h"


void tokenizer(char *string)
{
        unsigned int linenum = 1;
        stack_t *stack = NULL;
        char *lines = NULL, *command = NULL, *arg = NULL;

        lines = strtok(string, "\n");
        while (lines != '\0')
        {
                command = strtok(lines, "\t ");
                arg = strtok(lines, "\t ");
                opcode(command, linenum, string, &stack);
                linenum++;
        }
}