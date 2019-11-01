#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node end
 * @head: pointer of node
 * @str: string with info
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;
	int count = 0;

	new_node = malloc(sizeof(list_t));
	last = *head;
	if (new_node == NULL)
		return (NULL);
	while (str[count])
		count++;
	new_node->len = count;
	new_node->str = strdup(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
