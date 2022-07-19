#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head of node
 * @index: unsigned int index of the node
 *
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (index == counter)
			return (head);

		head = head->next;
		counter++;
	}
	return (NULL);
}
