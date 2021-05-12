#include "monty.h"

/**
 * free_stack - free memory of the stack
 * @stack: stack of linked list
 */

void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (tmp)
	{
		tmp = tmp->next;
		free(*stack);
		*stack = tmp;
	}
}
