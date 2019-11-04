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
	while (count != index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		count++;
	}
	eraser = tmp->next;
	tmp = eraser->next;
	free(eraser);
	return (1);
}
