#include "monty.h"

void pall(const stack_t *stack)
{
    if (stack == NULL)
    {
        fprintf(stderr, "Error: Can't open file <file>");
        exit(EXIT_FAILURE);
    }

    while (stack != NULL)
    {
        printf("%i\n", stack->n);
        stack = stack-> next; /* print head to tail, need to print tail to head */
    }
}