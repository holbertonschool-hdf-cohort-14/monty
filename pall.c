#include "monty.h"

void _pall(stack_t *head)
{
    stack_t *new_node;

    new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (head == NULL)
    {
        fprintf(stderr, "Error: Can't open file <file>");
        exit(EXIT_FAILURE);
    }

    head = new_node;
    new_node->prev = NULL;
    new_node->next = head;
    head->prev = new_node;

    while (head != NULL)
    {
        printf("%i\n", head->n);
        head = head-> next; /* print head to tail, need to print tail to head */
    }
}