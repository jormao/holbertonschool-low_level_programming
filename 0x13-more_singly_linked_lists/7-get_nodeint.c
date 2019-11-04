#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that return the nth node
 * @head: pointer of the lincked list
 * @index: index of the node starting in 0
 *
 * Return: value in the index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		if (count == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
