#include "monty.h"

/**
 * _pint - print value on top of the stack
 * @stack: stack
 * @line_number: line number
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack == NULL)
		_Error(Error_stack_empty, op_value, line_number);

	line_number = (*stack)->n;

	fprintf(stdout, "%d\n", line_number);
}
