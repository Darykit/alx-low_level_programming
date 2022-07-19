#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: double pointer to had of node
 * @index: unsigned int
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next;
	unsigned int counter = 0;

	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && counter < index - 1)
	{
		temp = temp->next;
		counter++;
		if (temp == NULL || temp->next == NULL)
			return (-1);
	}

	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
