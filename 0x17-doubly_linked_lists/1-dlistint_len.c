#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number elements of a dlistint list
 * @h: head of the dlistint
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
		}
	return (count);

}
