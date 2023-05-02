#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * new_dog - new dog
  * @name: name
  * @age: age
  * @owner: owner
  * Return: p
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(struct dog));
	if (p == NULL || p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	if (name == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	p->name = name;
	p->owner = owner;
	p->age = age;
	return(p);
}
