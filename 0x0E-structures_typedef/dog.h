#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a structure representing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 * Description: a structure representing a dog with its name, age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif /* DOG_H */
