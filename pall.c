#include "monty.h"

void _pall(stack_t *stack, unsigned int line_number)
{
    (void)line_number;
    stack_t *new_node;

    new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (stack == NULL)
    {
        fprintf(stderr, "Error: Can't open file <file>");
        exit(EXIT_FAILURE);
    }

    stack = new_node;
    new_node->prev = NULL;
    new_node->next = stack;
    
    while (stack != NULL)
    {
        fprintf(stdout, "%i\n", new_node->n);
        stack = new_node-> next; /* print head to tail, need to print tail to head */
    }
}