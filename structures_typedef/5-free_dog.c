#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dog struct
 * @d: pointer to the adress of struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
