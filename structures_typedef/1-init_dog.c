#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to a struct
 * @name: pointer to the name in the struct
 * @age: pointer to the age in the struct
 * @owner: pointer to the owner in the struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
