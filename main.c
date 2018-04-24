#include "monty.h"

int main(int argc, char **argv)
{
    int fd;

    if (argc != 2)
    {
        printf("USAGE: monty file");
        exit(EXIT_FAILURE);
    }
    fd = fopen(argv[1], "r");
    if (fd == -1)
    {
        printf("Error: Can't open file %s", argv[1]);
        exit(EXIT_FAILURE);
    }

}