#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Write a function that prints a struct dog
 * @d: point to a struct mem adress
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age >= 0.0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
