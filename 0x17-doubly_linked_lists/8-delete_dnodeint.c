#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to beggin
 * @index: indicate the node that shold be deleted
 *
 * Return: 1 success, -1 failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 1;
	dlistint_t *tmp, *eraser;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		eraser = *head;
		*head = tmp->next;
		tmp = tmp->next;
		if (tmp != NULL)
			tmp->prev = NULL;
		free(eraser);
		return (1);
	}
	while (count != index)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		count++;
	}
	if (tmp->next->next != NULL)
	{
		eraser = tmp->next->next;
		free(tmp->next);
		tmp->next = eraser;
		eraser->prev = tmp;
		return (1);
	}
	else
	{
		free(tmp->next);
		tmp->next = NULL;
		return (1);
	}
}
