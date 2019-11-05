#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to begin of the list
 * @idx: is the index of the position where the new node is insert.
 * @n: data of the new node
 *
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 1;
	listint_t *new_node, *tmp;

	tmp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = tmp;
		new_node->n = n;
		*head = new_node;
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
	 tmp->next = new_node;
	return (new_node);
}
