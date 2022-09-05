#include "lists.h"

/**
* dlistint_len - return number of element
* @h: head pointer
* Return: node count
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		counter++;
	}
	return (counter);
}
