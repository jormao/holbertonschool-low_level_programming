#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that create a new dog
 * @name: value 1
 * @age: value 2
 * @owner: value 3
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
