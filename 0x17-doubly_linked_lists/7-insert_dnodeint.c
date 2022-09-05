#include "lists.h"

/**
* insert_dnodeint_at_index - insert node at a position
* @h: head pointer
* @idx: position to insert
* @n: value of newnode
* Return: newnode
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i;

	newnode = malloc(sizeof(dlistint_t));
	i = 0;

	if (newnode == NULL)
		return (NULL);
	if (*h == NULL)
		*h = newnode;
	newnode->n = n;
	temp = *h;
	while (i < idx && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	newnode->next = temp->next;
	temp->next->prev = temp;
	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);

}
