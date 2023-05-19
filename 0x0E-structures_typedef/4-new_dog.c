/*
 * Write a function that creates a new dog.
 * You have to store a copy of name and owner
 * Return NULL if the function fails
*/
#include "dog.h"
#include <stdlib.h>

/**
 * strlen - measures the length of a string
 * @str: measures to checked
 * Return: length of the string
*/
long unsigned int _strlen(char *str)
{
	long unsigned int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
 * strcpy: copies the string pointed to by src including the '\0'
 * @dest: string to be updated
 * @src: string to be copied
 * Return: updated string
*/
void _strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
}

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
	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!(new_dog->name && new_dog->owner))/*check if null*/
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}
