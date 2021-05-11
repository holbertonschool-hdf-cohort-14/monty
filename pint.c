#include "monty.h"

void _pint(stack_t *head)
{
    if (head == NULL)
    {
        exit(EXIT_FAILURE);
    }

    fprintf(stdout, "%i\n", head->n);
}