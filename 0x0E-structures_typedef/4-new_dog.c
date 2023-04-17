#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates another dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the another dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *another_dog;
	char *another_name, *another_owner;

	another_dog = malloc(sizeof(dog_t));
	if (another_dog == NULL)
		return (NULL);
	another_name = strdup(name);
	if (another_name == NULL)
	{
		free(another_dog);
		return (NULL);
	}
	another_owner = strdup(owner);
	if (another_owner == NULL)
	{
		free(another_name);
		free(another_dog);
		return (NULL);
	}
	another_dog->name = another_name;
	another_dog->age = age;
	another_dog->owner = another_owner;

	return (another_dog);

}
