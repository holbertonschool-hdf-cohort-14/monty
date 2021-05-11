#include "monty.h"

void _pint(stack_t **stack, unsigned int line_number)
{
    (void)line_number;

    if (*stack == NULL)
    {
        _Error(Error_malloc, op_value, line_number);
        exit(EXIT_FAILURE);
    }

    line_number = (*stack)->n;

    fprintf(stdout, "%i\n", line_number);
}