#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add new node at the end of a double linked list
 * @head: address of the last node
 * @n: value to insert at the end of the list
 *
 * Return: address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node;
	dlistint_t *last;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	last = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return (new_node);
}
