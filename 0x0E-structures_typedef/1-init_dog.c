#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize struct dog
 * @d: pointer to the struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: This function initializes a variable of type struct dog
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
