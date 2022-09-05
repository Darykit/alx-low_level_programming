#include "lists.h"

/**
* print_dlistint - print elements of linked list
* @h: head pointer
* Return: number of nodes
*/


size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
