#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - print dog struct
  * @d: dog struct pointer
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	} else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0.0)
	{
		printf("Age: (nil)\n");
	} else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
}
