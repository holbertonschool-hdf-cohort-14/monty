#include "monty.h"

void _push(stack_t **head, int n)
{
    stack_t *new_node;
    new_node = malloc(sizeof(stack_t));
    
    if (new_node == NULL || *head == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

}