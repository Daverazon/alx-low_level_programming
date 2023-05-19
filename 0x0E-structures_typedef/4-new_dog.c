/*
 * Write a function that creates a new dog.
 * You have to store a copy of name and owner
 * Return NULL if the function fails
*/
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a variable of type dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the newly created dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
