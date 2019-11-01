#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node
 * @head: pointer of node
 * @str: string with info
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_2;
	int count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	str_2 = strdup(str);
	new_node->str = str_2;
	new_node->next = *head;
	while (str_2[count])
		count++;
	new_node->len = count;
	*head = new_node;
	return (new_node);
}
