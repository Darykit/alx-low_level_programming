#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: double pointer to head of node
 *
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int sec;

	if (*head == NULL)
		return (0);

	temp = *head;
	sec = temp->n;
	*head = temp->next;

	free(temp);
	return (sec);
}

