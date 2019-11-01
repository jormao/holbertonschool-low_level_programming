#include <stdio.h>
#include "lists.h"

/**
 * free_list - free a list_t
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *new;
	list_t *next;

	new = head;

	while (new)
	{
		next = new->next;
		free(new->str);
		free(new);
		new = nxt;
	}
}
