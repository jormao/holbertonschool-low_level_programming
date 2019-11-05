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
    listint_t *real;
    listint_t *new;

    real = *head;
	if (*head == NULL)
		return;
    while (real != NULL)
	{
		new = real->next;
        free(real);
        real = new;
	}
    *head = NULL;
}