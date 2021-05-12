#include "monty.h"

/**
 * _pop - removes element on top of the stack
 * @stack: stack
 * @line_number: line number
 */

void _pop(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp;

	tmp = *stack;

	if (*stack == NULL)
		_Error(Error_pop, NULL, line_number);

	*stack = (*stack)->next;
	free(tmp);
}
