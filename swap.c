#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack
 * @stack: stack
 * @line_number: line number
 */

void _swap(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp, *new_node;
	int n = 0;

	n = line_len(stack);
	if (n < 2)
		_Error(Error_swap, NULL, line_number);

	new_node = *stack;
	tmp = (*stack)->next;

	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next = new_node;

	*stack = tmp;
}
/**
 * line_len - number of nod
 * @stack: stack
 * Return: number of nod
 */
int line_len(stack_t **stack)
{
	int n = 0;
	stack_t *tmp = *stack;

	while (tmp)
	{
		tmp = tmp->next;
		n++;
	}
	return (n);
}
