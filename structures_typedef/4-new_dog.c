#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - create a new dog
 * @name: pointer to the mem adress of var name in struct dog
 * @age: same as name but with age
 * @owner: same as name but with owner
 *
 * Return: NULL if fail the new dog insted
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = 0, len2 = 0, i;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	while (name[len1] != '\0')
		len1++;

	dog->name = malloc(sizeof(char) * (len1 + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		dog->name[i] = name[i];
	dog->name[len1] = '\0';

	while (owner[len2] != '\0')
		len2++;

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		dog->owner[i] = owner[i];
	dog->owner[len2] = '\0';

	dog->age = age;

	return (dog);
}
