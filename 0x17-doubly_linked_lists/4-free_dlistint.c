#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a double linked list
 * @head: address of the head of double linked list
 *
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_dlistint(head->next);
		free(head);
	}
}
