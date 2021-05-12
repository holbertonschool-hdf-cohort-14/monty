#include "monty.h"
/**
 * _add - function tha add opvalue
 * @stack: stack
 * @line_number: line number
 */
void _add(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	unsigned int add = 0;

	if ((*stack)->next == NULL || *stack == NULL)
		_Error(Error_add, NULL, line_number);

    if (*stack && (*stack)->next)
    {
	    add = (*stack)->n + (*stack)->next->n;
	    (*stack)->n = add;
	    delete_nodeint_at_index(stack, 1);
    }
}
