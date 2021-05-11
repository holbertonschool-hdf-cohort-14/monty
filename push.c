#include "monty.h"

void _push(stack_t **stack, unsigned int line_number __attribute__((unused)))
{

    stack_t *new_node = NULL;
    new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
    {
        _Error(Error_malloc, NULL, line_number);
    }

   /** if (is_digit_str(data.args[1]) > 0)
    {
        free(new_node);
        _Error(Error_instruction);
    }*/
    new_node->n = atoi(op_value);
    new_node->prev = *stack;

    if (*stack)
        (*stack)->prev = new_node;
    *stack = new_node;
    
}