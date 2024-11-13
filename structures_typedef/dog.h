#ifndef dog_h
#define dog_h

/**
 * struct dog - struct of a dog
 * @name: pointer to the name
 * @age: the age
 * @owner: pointer to the owner
 *
 * i dont know what to say
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
