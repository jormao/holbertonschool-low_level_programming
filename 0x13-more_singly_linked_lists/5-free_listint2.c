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
    if (*head != NULL)
	{
		if (*head->next != NULL)
			free_listint2(*head->next);
		free(*head);
	}
}