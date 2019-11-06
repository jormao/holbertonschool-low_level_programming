#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the head
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *aux = (void *)head, *test = 0;
	int flag = 0;

	while (aux != NULL)
	{
		if (flag == 0)
		{
			test = aux;
			printf("[%p] %d\n", (void *)aux, aux->n);
		}
		if (flag == 1)
		{
			if (test <= aux)
			{
				printf("-> [%p] %d\n", (void *)aux, aux->n);
				return (count);
			}
			printf("[%p] %d\n", (void *)aux, aux->n);
		}
		count += 1;
		test = aux;
		aux = aux->next;
		flag = 1;
	}
	return (count);
}
