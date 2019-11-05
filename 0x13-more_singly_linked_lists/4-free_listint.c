#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: address of the linked list
 *
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}
