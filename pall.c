#include "monty.h"

void _pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
    stack_t *new_node;
    int i;

    new_node = *stack;
    for (i = 0; new_node != NULL; i++)
    {
        printf("%d\n", new_node->n);
        new_node = new_node->next;
    }
}