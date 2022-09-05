#include "lists.h"

/**
* sum_dlistint - sums all values of tlist
* @head: head pointer
* Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int counter;

	temp = head;
	counter = 0;
	while (temp != NULL)
	{
		counter += temp->n;
		temp = temp->next;
	}
	return (counter);
}
