#include "lists.h"

/**
* free_dlistint - free list
* @head: head pointer
* Return: nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
