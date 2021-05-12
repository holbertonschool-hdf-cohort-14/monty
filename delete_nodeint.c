#include "monty.h"

/**
 * delete_nodeint_at_index - delete node at chosen index
 * @head: head node
 * @index: integer
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(stack_t **head, unsigned int index)
{

	stack_t *new, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		new = *head;
		*head = new->next;
		free(new);
		return (1);
	}
	temp = *head;
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	new = temp->next->next;
	free(temp->next);
	temp->next = new;
return (1);
}