#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that return the nth node
 * @head: pointer of the double lincked list
 * @index: index of the node starting in 0
 *
 * Return: value in the index node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = head;

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
