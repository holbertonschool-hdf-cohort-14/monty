#include "monty.h"
/**
 * _add - function tha add opvalue
 * @stack: stack
 * @line_number: line number
 */
void _add(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	unsigned int add = 0;
	int n = 0;

	n = line_len(stack);
	if (n < 2)
		_Error(Error_add, NULL, line_number);

	add = (*stack)->n + (*stack)->next->n;
	(*stack)->n = add;
	delete_nodeint_at_index(stack, 1);
}

/**
 * _sub - function tha add opvalue
 * @stack: stack
 * @line_number: line number
 */
void _sub(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	unsigned int sub = 0;
	int n = 0;

	n = line_len(stack);
	if (n < 2)
		_Error2(Error2_sub, NULL, line_number);

	sub = (*stack)->n - (*stack)->next->n;
	(*stack)->n = sub;
	delete_nodeint_at_index(stack, 1);
}
