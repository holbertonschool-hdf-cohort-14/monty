#include "monty.h"

void _pint(stack_t **stack, unsigned int line_number)
{
    (void)line_number;
    if (stack == NULL)
    {
        exit(EXIT_FAILURE);
    }

    fprintf(stdout, "%i\n");
}