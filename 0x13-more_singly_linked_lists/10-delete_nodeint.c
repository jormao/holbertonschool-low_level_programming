#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to beggin
 * @index: indicate the node that shold be deleted
 *
 * Return: 1 success, -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *tmp, *eraser;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (count != index)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		count++;
	}
	eraser = tmp->next->next;
	free(tmp->next);
	tmp->next = eraser;
	return (1);
}
