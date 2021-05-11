#include "monty.h"

void _push(stack_t **stack, unsigned int line_number)
{
    
    stack_t *new_node = NULL;
    new_node = malloc(sizeof(stack_t));
    (void)line_number;

    if (new_node == NULL || *stack == NULL)
    {
        _Error(Error_malloc, NULL, line_number);
    }

    if (*stack == NULL)
    {
        new_node->next = *stack;
        new_node->prev = NULL;
        *stack = new_node;
        return;
    }

    new_node->next = *stack;
    new_node->prev = NULL;
    (*stack)->prev = new_node;
    *stack = new_node;
}