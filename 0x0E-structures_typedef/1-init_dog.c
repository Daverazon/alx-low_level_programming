#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: a structure variable
 * @name: member of struct dog
 * @age: member of struct dog
 * @owner: member of struct dog
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
