#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to a linked list
 *
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
	head = NULL;
}
