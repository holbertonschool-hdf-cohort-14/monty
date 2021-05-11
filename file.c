#include "monty.h"

int main(int argc, char *argv[])
{
    if (argc <= 1) /* add if user do not give any file */
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    if ()
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if (file invalid instruction)
    {
        fprintf(stderr, "L%line_number: unknown instruction %opcode\n", line, opcode);
        exit(EXIT_FAILURE);
    }

    return (0);
}