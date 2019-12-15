#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to begin of the list
 * @idx: is the index of the position where the new node is insert.
 * @n: data of the new node
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *new_node, *tmp;

	tmp = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = tmp;
		new_node->n = n;
		new_node->prev = NULL;
		if (tmp != NULL)
		*h = new_node;
		return (new_node);
	}
	while (count != idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		count++;
	}
	 new_node->next = tmp->next;
	 new_node->n = n;
	 new_node->prev = tmp;
	 tmp->next = new_node;
	 if (new_node->next == NULL)
	 	return(new_node);
	 tmp = tmp->next;
	 tmp = tmp->next;
	 tmp->prev = new_node;	 
	return (new_node);
}
