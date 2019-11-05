#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data
 * @head: pointer to begin of the lincked list
 *
 * Return: sum of all datas
 */

int sum_listint(listint_t *head)
{
	int suma = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);
	while (tmp->next != NULL)
	{
		suma += tmp->n;
		tmp = tmp->next;
	}
	suma += tmp->n;
	return (suma);
}
