#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - pointer to a new alloc space of memory pointing to a copy of a str
 * @str: the string we want to copy
 *
 * Return: the copied str if enough space, NULL otherwise
 */

char *_strdup(char *str)
{
	char *array;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	array = malloc(len + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		array[i] = str[i];

	array[len] = '\0';

	return (array);
}

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

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);

	if (dog->name == NULL)
		return (NULL);

	dog->age = age;

	dog->owner = _strdup(owner);

	if (dog->owner == NULL)
		return (NULL);

	return (dog);
}
