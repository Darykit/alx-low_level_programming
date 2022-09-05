#include "lists.h"

/**
* add_dnodeint_end - add node at end of list
* @head: head pointer
* @n: value of node to add
* Return: address of newnode
*/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp;

	newnode = malloc(sizeof(dlistint_t));
	temp = *head;
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}
