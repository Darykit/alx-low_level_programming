#include "lists.h"

/**
* add_dnodeint - add node at the start of a list
* @head: head pointer
* @n: value of node
* Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		newnode->next = temp;
		temp->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}
