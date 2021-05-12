#include "monty.h"

/**
 * _push - push an element to the stack
 * @stack: stack
 * @line_number: line number
 */

void _push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		_Error(Error_malloc, NULL, line_number);
	}

	if (_isdigit(op_value) != 0 || op_value == NULL)
	{
		free(new_node);
		_Error(Error_push_integer, NULL, line_number);
	}

	new_node->n = atoi(op_value);

	if (*stack)
	{
		new_node->next = *stack;
		new_node->prev = NULL;
		(*stack)->prev = new_node;
		*stack = new_node;
		return;
	}

	new_node->next = *stack;
	new_node->prev = NULL;
	*stack = new_node;
}
