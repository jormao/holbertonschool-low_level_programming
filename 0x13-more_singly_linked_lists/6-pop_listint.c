#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node from the lincked list
 * @head: pointer to the begin of the lincked list
 *
 * Return: data that was in the node
 */

int pop_listint(listint_t **head)
{
	int data_ret = 0;
	listint_t *tmp = *head;

	if (tmp == NULL)
		return (0);
	data_ret = tmp->n;
	*head = tmp->next;
	if (tmp != NULL)
	{
		free(tmp);
		return (data_ret);
	}
	return (data_ret);
}
