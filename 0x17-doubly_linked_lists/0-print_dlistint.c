#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint list
 * @h: head of the dlistint
 * 
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
		}
	return (count);

}