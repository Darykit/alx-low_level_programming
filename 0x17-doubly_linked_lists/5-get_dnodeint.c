#include "lists.h"

/**
* get_dnodeint_at_index - get node at an index
* @head: head pointer
* @index: position to get node
* Return: node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	count = 0;
	temp = head;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (temp);
}
