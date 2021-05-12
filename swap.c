#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack
 * @stack: stack
 * @line_number: line number
 */

void _swap(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
stack_t *tmp, *new_node;

if ((*stack)->next == NULL || *stack == NULL)
_Error(Error_swap, NULL, line_number);

new_node = *stack;
tmp = (*stack)->next;

new_node->next = tmp->next;
new_node->prev = tmp;
tmp->next = new_node;

*stack = tmp;
}